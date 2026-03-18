#pragma once

#include <stdexcept>
#include <vector>
#include <utility>

class MinHeap {
private:
    // Storing the heap elements in a vector. The root of the heap is at index 1
    std::vector<int> heap;

    // --- Index Helper Methods ---
    // 0 is the root index
    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

    // --- Core Heap Algorithms ---

    // Moves a newly added element UP the tree until the heap property is restored
    void perculateUp(int i) {
        // While we are not at the root, and the parent is greater than the current node
        while (i > 0 && heap[parent(i)] > heap[i]) {
            std::swap(heap[parent(i)], heap[i]);
            i = parent(i); // Move our focus up to the parent's index
        }
    }

    // Moves a swapped element DOWN the tree until the heap property is restored
    void perculateDown(int i) {
        int minIndex = i;
        int left = leftChild(i);
        int right = rightChild(i);

        // Check if the left child exists and is smaller than the current min
        if (left < heap.size() && heap[left] < heap[minIndex]) {
            minIndex = left;
        }

        // Check if the right child exists and is smaller than the current min
        if (right < heap.size() && heap[right] < heap[minIndex]) {
            minIndex = right;
        }

        // If the smallest value isn't the current node, swap and keep sifting down
        if (i != minIndex) {
            std::swap(heap[i], heap[minIndex]);
            perculateDown(minIndex); // Recursively sift down the affected subtree
        }
    }

public:
    // --- Public Interface ---

    // Add a new element to the heap
    void insert(int val) {
        // 1. Put the new element at the very end of the vector
        // 2. Sift it up to its correct position
    }

    // Look at the smallest element without removing it
    int peek() {
        // If the heap is empty, we can't peek, so we throw an exception
        // Return the root of a Min-Heap (is always at index 0)
    }

    // Remove and return the smallest element
    int extractMin() {
        // If the heap is empty, we can't extract, so we throw an exception
 
        // Save the value to return later

        // 1. Overwrite the root with the last element in the vector

        // 2. Remove the last element (which is now duplicated at the root)

        // 3. Sift the new root down to its correct position (if the heap isn't empty)
        // Pass 0 to perculateDown to start the process from the root
       
        // Return the saved minimum value
    }

    // Check if the heap is empty
    bool isEmpty() {
        return heap.empty();
    }

    // Get the current size of the heap
    int size() {
        return heap.size();
    }
};
