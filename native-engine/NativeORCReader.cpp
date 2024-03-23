#include "NativeORCReader.h"
#include <arrow/io/api.h>
#include <jni.h>

NativeORCReader::NativeORCReader(const std::string &file_name) {

    // Open File
    auto input = arrow::io::ReadableFile::Open(file_name);

    // Open ORC File Reader
    auto fileReader = arrow::adapters::orc::ORCFileReader::Open(*input, arrow::default_memory_pool());
    fileReader_.reset((*fileReader).release());

    // get record batch Reader
    auto recordBatchReader = fileReader_->GetRecordBatchReader(4096, std::vector<std::string>());
    recordBatchReader_ = *recordBatchReader;
}

std::shared_ptr<arrow::RecordBatch> NativeORCReader::ReadNext() {

    auto batch = recordBatchReader_->Next();
    if (batch == nullptr) {
      return nullptr;
    }
    return std::make_shared<arrow::RecordBatch>(batch);
}

JNIEXPORT jlong JNICALL Java_ca_sfu_hiaccel_NativeORCReader_initNativeORCReader
        (JNIEnv *env, jobject, jobject jmemorypool, jstring java_file_name, jbyteArray schema_file_jarr,
         jbyteArray schema_out_jarr,
         jint num_rows) {

    std::string file_name = get_java_string(env, java_file_name);

    jsize schema_file_len = env->GetArrayLength(schema_file_jarr);
    jbyte *schema_file_bytes = env->GetByteArrayElements(schema_file_jarr, 0);
    std::shared_ptr<arrow::Schema> schema_file = ReadSchemaFromProtobufBytes(schema_file_bytes, schema_file_len);

    jsize schema_out_len = env->GetArrayLength(schema_out_jarr);
    jbyte *schema_out_bytes = env->GetByteArrayElements(schema_out_jarr, 0);
    std::shared_ptr<arrow::Schema> schema_out = ReadSchemaFromProtobufBytes(schema_out_bytes, schema_out_len);

    std::shared_ptr<arrow::MemoryPool> pool = std::make_shared<JavaMemoryPool>(env, jmemorypool);
    return (jlong) new NativeORCReader(pool, file_name, schema_file, schema_out, (int) num_rows);
}

JNIEXPORT jboolean JNICALL Java_ca_sfu_hiaccel_NativeORCReader_readNext
        (JNIEnv *env, jobject, jlong process_ptr, jlongArray jarr_vector_lengths, jlongArray jarr_vector_null_counts,
         jlongArray jarr_buf_addrs) {

    NativeORCReader *nativeORCReader = (NativeORCReader *) process_ptr;

    std::shared_ptr<arrow::RecordBatch> out_batch = nativeORCReader->ReadNext();
    
    // Read buffers, field vector length & nullcount from RecordBatch
    const std::shared_ptr<arrow::Schema> &schema = out_batch->schema();
    auto num_fields = schema->num_fields();

    jlong buffer_addresses[num_fields * 3];
    jlong vector_lengths[num_fields];
    jlong vector_null_counts[num_fields];

    for (int i = 0; i < num_fields; i++) {
        const std::shared_ptr<arrow::Field> &field = schema->field(i);
        const std::shared_ptr<arrow::Array> &column = out_batch->column(i);
        const std::shared_ptr<arrow::ArrayData> &data = column->data();

        vector_lengths[i] = column->length();
        vector_null_counts[i] = column->null_count();

        const std::shared_ptr<arrow::Buffer> &validity_buffer = data->buffers[0];
        if (validity_buffer != nullptr) {
            buffer_addresses[3 * i + 0] = validity_buffer->address();
        } else {
            buffer_addresses[3 * i + 0] = 0;
        }

        const std::shared_ptr<arrow::Buffer> &value_buffer = data->buffers[1];
        buffer_addresses[3 * i + 1] = value_buffer->address();

        if (arrow::is_binary_like(field->type()->id())) {
            const std::shared_ptr<arrow::Buffer> &offset_buffer = data->buffers[2];
            buffer_addresses[3 * i + 2] = offset_buffer->address();
        } else {
            buffer_addresses[3 * i + 2] = 0;
        }
    }

    //Copy data into Java arrays
    env->SetLongArrayRegion(jarr_vector_lengths, 0, num_fields, vector_lengths);
    env->SetLongArrayRegion(jarr_vector_null_counts, 0, num_fields, vector_null_counts);
    env->SetLongArrayRegion(jarr_buf_addrs, 0, num_fields * 3, buffer_addresses);

    return true;
}

JNIEXPORT void JNICALL Java_ca_sfu_hiaccel_NativeORCReader_close
        (JNIEnv *env, jobject, jlong process_ptr) {
    delete (NativeORCReader *) process_ptr;
}