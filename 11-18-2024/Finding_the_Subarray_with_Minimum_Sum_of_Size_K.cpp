#include <bits/stdc++.h>
using namespace std;

long long findMinSumSubarray(int n, int k, vector<int>& arr) {
    long long sum = 0;

    // Calculate the sum of the first 'k' elements
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    long long minsum = sum;
    int left = 0, right = k;

    // Slide the window over the array
    while (right < n) {
        sum += arr[right] - arr[left]; // Update sum by adding the next element and removing the leftmost element
        right++;
        left++;
        minsum = min(minsum, sum); // Update the minimum sum found
    }
    
    return minsum;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << findMinSumSubarray(n, k, arr) << endl;
    return 0;
}
