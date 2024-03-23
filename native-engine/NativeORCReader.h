#include <iostream>
#include <arrow/api.h>
#include <arrow/adapters/orc/adapter.h>
#include <arrow/dataset/api.h>
#include <arrow/util/iterator.h>

class NativeORCReader {
private:
    std::shared_ptr<arrow::dataset::Dataset> dataset;
    std::shared_ptr<arrow::dataset::ScanTaskIterator> scan_task_it;
    std::unique_ptr<arrow::adapters::orc::ORCFileReader> fileReader_;
    std::shared_ptr<arrow::RecordBatchReader> recordBatchReader_;
    std::shared_ptr<arrow::RecordBatchIterator> recordBatchIter;
    std::shared_ptr<arrow::RecordBatch> batch;
    long long duration = 0;
public:
    NativeORCReader(const std::string &file_name);
    ~NativeORCReader() = default;
    std::shared_ptr<arrow::RecordBatch> ReadNext();
};