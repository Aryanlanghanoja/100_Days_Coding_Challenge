#include <iostream>
#include <queue>
using namespace std;

void max_heap_operations(int n, vector<pair<char, int>> queries) {
    priority_queue<int> maxHeap;

    for (int i = 0; i < n; ++i) {
        char operation = queries[i].first;

        if (operation == '+') {  // Insert operation
            int x = queries[i].second;
            maxHeap.push(x);
            cout << maxHeap.top() << endl;  // Print current max element
        }
        else if (operation == '-') {  // Remove max operation
            if (!maxHeap.empty()) {
                maxHeap.pop();  // Remove the largest element
            }
            if (!maxHeap.empty()) {
                cout << maxHeap.top() << endl;  // Print new max element
            } else {
                cout << "Heap is empty" << endl;  // In case the heap becomes empty
            }
        }
    }
}

int main() {
    int n;
    cin >> n;  // Number of queries

    vector<pair<char, int>> queries(n);
    for (int i = 0; i < n; ++i) {
        char operation;
        cin >> operation;
        if (operation == '+') {
            int x;
            cin >> x;
            queries[i] = {operation, x};
        } else {
            queries[i] = {operation, 0};
        }
    }

    max_heap_operations(n, queries);
    return 0;
}
