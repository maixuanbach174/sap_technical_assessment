cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Enable C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Create the executable for testing
add_executable(test_exec test.cpp)
