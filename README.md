# C++ Demo Project with vcpkg

A modern C++ project demonstrating the use of vcpkg package manager with CMake.

## Dependencies

- **fmt**: Modern string formatting library
- **spdlog**: Fast C++ logging library  
- **nlohmann/json**: JSON for Modern C++
- **cpprestsdk**: C++ REST SDK for HTTP operations

## Building the Project

1. Install dependencies with vcpkg:
   ```bash
   vcpkg install
   ```

2. Configure with CMake:
   ```bash
   cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=[path-to-vcpkg]/scripts/buildsystems/vcpkg.cmake
   ```

3. Build the project:
   ```bash
   cmake --build build
   ```

4. Run the demo:
   ```bash
   ./build/bin/demo_app
   ```

## What's New in Modern C++

This project showcases several modern C++ features:
- C++17 structured bindings and if-init statements
- Lambda expressions
- Modern package management with vcpkg
- CMake's modern target-based approach
- Header-only libraries integration