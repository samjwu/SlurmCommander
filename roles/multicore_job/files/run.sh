#!/bin/bash
# Build and run the example multicore code

# Exit immediately if a command exits with a non-zero status
set -e

# Check if the number of jobs is provided as an argument
if [ -z "$1" ]; then
    echo "Usage: $0 <number_of_jobs>"
    exit 1
fi

NUM_JOBS=$1

# Create build directory if it doesn't exist
if [ ! -d "build" ]; then
    mkdir build
fi

cd build

cmake ..

cmake --build . -- -j${NUM_JOBS}

./multicore
