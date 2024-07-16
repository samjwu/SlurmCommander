// Example multicore job
#include <iostream>
#include <thread>
#include <vector>

void printMessage(int threadID) {
    std::cout << "Running thread " << threadID << std::endl;
}

int main() {
    const int numThreads = 4;
    std::vector<std::thread> threads;

    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(printMessage, i);
    }

    for (auto& thread : threads) {
        thread.join();
    }

    std::cout << "All threads have finished execution." << std::endl;
    return 0;
}
