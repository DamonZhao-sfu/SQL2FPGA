#!/bin/bash

# Define the directory containing the TPCDS SQL queries
QUERY_DIR="."

# Define the package name for the Scala files
PACKAGE_NAME="org.example"

# Go through all SQL files in the directory
for sqlfile in "${QUERY_DIR}"/*.sql
do
  # Extract the base name of the SQL file (query number)
  query_number=$(basename "${sqlfile}" .sql | sed 's/q//')

  # Format the Scala class name (padded with zeros for the query number)
  scala_class_name="TPCDS_Q$(printf "%02d" "${query_number}")"

  # Create the Scala file
  scala_file="${scala_class_name}.scala"
  {
    # Write the Scala class structure
    echo "package ${PACKAGE_NAME}"
    echo "import org.apache.spark.sql._"
    echo "/**"
    echo " * TPC-DS Query ${query_number}"
    echo " */"
    echo "class ${scala_class_name} extends TPCDS_Queries {"
    echo "  override def TPCDS_execute(sc: SparkSession, schemaProvider: TpcdsSchemaProvider): DataFrame = {"
    echo "    sc.sql(\"\"\"$(sed 's/"/\\"/g' "${sqlfile}")\"\"\")"
    echo "  }"
    echo "}"
  } > "${scala_file}"

  # Print a message indicating the file has been created
  echo "Generated ${scala_file}"
done
