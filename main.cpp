#include <iostream>
#include "MinHeap.h"

// --- Testing the Implementation ---
int main() {
    MinHeap myHeap;

    std::cout << "Inserting elements: 15, 5, 20, 1, 8" << std::endl;
    myHeap.insert(15);
    myHeap.insert(5);
    myHeap.insert(20);
    myHeap.insert(1);
    myHeap.insert(8);

    std::cout << "\nExtracting elements in order (should be sorted):" << std::endl;
    while (!myHeap.isEmpty()) {
        std::cout << myHeap.extractMin() << " ";
    }
    std::cout << std::endl;

    return 0;
}