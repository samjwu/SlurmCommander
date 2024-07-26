# Example CMakeLists.txt

# Set minimum cmake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(Multinode VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(multinode multinode.cpp)

# Link pthread library for multithreading
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(multinode Threads::Threads)
