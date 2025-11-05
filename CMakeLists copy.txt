cmake_minimum_required(VERSION 3.20)
project(cpp_demo_project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find packages installed by vcpkg
find_package(fmt CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)
find_package(cpprestsdk CONFIG REQUIRED)
find_package(Eigen3 CONFIG REQUIRED)

# Create the executable
add_executable(demo_app src/main.cpp)

# Link libraries
target_link_libraries(demo_app 
    PRIVATE 
    fmt::fmt
    spdlog::spdlog
    nlohmann_json::nlohmann_json
    cpprestsdk::cpprest
    Eigen3::Eigen
)

# Set output directory
set_target_properties(demo_app PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)