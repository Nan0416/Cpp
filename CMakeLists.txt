# Specify the minimum CMake version
cmake_minimum_required(VERSION 3.15)

# Define the project name
project(AwsCppSdkExample)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the path to the AWS SDK installation
set(AWSSDK_ROOT_DIR "~/awssdkcpp_install")

# Add the include and library paths
include_directories("${AWSSDK_ROOT_DIR}/include")
link_directories("${AWSSDK_ROOT_DIR}/lib")

# Specify the source file
add_executable(AwsExample main.cpp)

# Link AWS SDK libraries (replace these with the specific libraries you need)
# Commonly used libraries include aws-cpp-sdk-core, aws-cpp-sdk-s3, etc.
target_link_libraries(AwsExample
    aws-cpp-sdk-core
    aws-cpp-sdk-s3
)

add_custom_target(myclean, COMMAND rm -rf build COMMENT "Clean build")