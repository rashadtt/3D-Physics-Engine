set(CMAKE_C_COMPILER "/usr/local/opt/llvm/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/local/opt/llvm/bin/clang++")
include_directories("/usr/local/opt/llvm/include/c++/v1")


cmake_minimum_required(VERSION 3.10)
project(Vector2D)

set(CMAKE_CXX_STANDARD 17)

# Add executable and source files
add_executable(Vector2D src/main.cpp src/vector2d.cpp)

# Include the src directory for header files
target_include_directories(Vector2D PRIVATE ${CMAKE_SOURCE_DIR}/src)

