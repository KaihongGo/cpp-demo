#include <iostream>
#include "threadpool.h"

void printHello(int i) {
    std::cout << "Hello from task " << i << "\n";
}

int main() {
    ThreadPool pool(4); // Create a ThreadPool with 4 threads

    // Enqueue 10 tasks
    for(int i = 0; i < 10; ++i) {
        pool.enqueue(printHello, i);
    }

    return 0;
}