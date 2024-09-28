#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Calculate the total number of elements
    int total_elements = n * m;

    // Check if the total number of elements is even
    if (total_elements % 2 != 0) {
        cout << -1 << endl;
    } else {
        // Construct the n x m matrix filled with 1s
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << 1 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}