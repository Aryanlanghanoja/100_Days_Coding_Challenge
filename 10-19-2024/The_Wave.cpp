#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Declare variables for number of elements and queries
    long long n, q;
    cin >> n >> q;

    // Declare a vector to store the elements
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sort the elements
    sort(a.begin(), a.end());

    // Process each query
    for (long long i = 0; i < q; i++) {
        long long x;
        cin >> x;

        long long low = 0, high = n - 1;
        bool flag = false;

        // Perform binary search to find x
        while (low <= high) {
            long long mid = (low + high) / 2;
            if (a[mid] == x) {
                flag = true;
                break;
            } else if (x < a[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        // Output results based on the search results
        if (flag) {
            cout << "0" << endl;  // x is found in the array
        } else {
            if (high == -1) {
                cout << ((n % 2) ? "NEGATIVE" : "POSITIVE") << endl;  // x is less than all elements
            } else if (low == n) {
                cout << "POSITIVE" << endl;  // x is greater than all elements
            } else {
                cout << (((n - high - 1) % 2) ? "NEGATIVE" : "POSITIVE") << endl;  // x is in between elements
            }
        }
    }

    return 0;
}
