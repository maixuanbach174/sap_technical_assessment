cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Enable C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Create a library from task1, task2, and task3
add_library(tasks STATIC task1.cpp task2.cpp task3.cpp)

# Create the executable for testing
add_executable(test_exec test.cpp)

# Link the tasks library with the test executable
target_link_libraries(test_exec PRIVATE tasks)
