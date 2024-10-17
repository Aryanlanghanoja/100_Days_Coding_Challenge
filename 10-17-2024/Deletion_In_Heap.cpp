#include <iostream>
#include <vector>
using namespace std;

// Function to heapify down the element at index 'i'
void heapifyDown(vector<int>& heap, int i, int size) {
    int smallest = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    // If the left child is smaller than the current element
    if (leftChild < size && heap[leftChild] < heap[smallest]) {
        smallest = leftChild;
    }

    // If the right child is smaller than the smallest found so far
    if (rightChild < size && heap[rightChild] < heap[smallest]) {
        smallest = rightChild;
    }

    // If the smallest is not the current element, swap and continue heapifying down
    if (smallest != i) {
        swap(heap[i], heap[smallest]);
        heapifyDown(heap, smallest, size);
    }
}

// Function to delete the minimum element from the heap
void deleteMin(vector<int>& heap, int& size) {
    if (size == 0) {
        cout << "Heap is empty\n";
        return;
    }

    // Swap the root with the last element
    heap[0] = heap[size - 1];
    size--; // Reduce the heap size

    // Heapify down from the root to maintain the min-heap property
    heapifyDown(heap, 0, size);
}

// Function to print the heap
void printHeap(const vector<int>& heap, int size) {
    for (int i = 0; i < size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;

    vector<int> heap(N);
    for (int i = 0; i < N; i++) {
        cin >> heap[i];
    }

    // Size of the current heap
    int heapSize = N;

    // Perform the deletion until the heap is empty
    while (heapSize > 0) {
        deleteMin(heap, heapSize);
        if (heapSize > 0) {
            printHeap(heap, heapSize);  // Print the heap after each deletion
        }
    }

    return 0;
}
