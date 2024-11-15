#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input
    int n, k;
    cin >> n >> k;
    int arr[n];
    
    // Reading the array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Calculate the sum of the first window (first k elements)
    int max_sum = 0;
    for (int i = 0; i < k; i++) {
        max_sum += arr[i];
    }
    
    int current_sum = max_sum;
    
    // Slide the window across the array
    for (int i = k; i < n; i++) {
        // Remove the element going out of the window and add the new element
        current_sum += arr[i] - arr[i - k];
        
        // Update the maximum sum
        max_sum = max(max_sum, current_sum);
    }
    
    // Output the result
    cout << max_sum << endl;
    return 0;
}
