#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> matrix(n, vector<int>(n));
    vector<vector<int>> dp(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int max_side = 0;  // To store the side length of the largest square
    
    // Initialize the first row and first column of dp with matrix values
    for (int i = 0; i < n; i++) {
        dp[i][0] = matrix[i][0];
        max_side = max(max_side, dp[i][0]);
    }
    for (int j = 0; j < n; j++) {
        dp[0][j] = matrix[0][j];
        max_side = max(max_side, dp[0][j]);
    }
    
    // Fill the rest of the dp table
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 1) {
                dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
                max_side = max(max_side, dp[i][j]);
            }
        }
    }
    
    // The area of the largest square is the square of the side length
    int max_area = max_side * max_side;
    cout << max_area << endl;
    
    return 0;
}
