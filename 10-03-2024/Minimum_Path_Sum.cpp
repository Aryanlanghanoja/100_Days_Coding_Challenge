#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;  // Read dimensions of the matrix
    vector<vector<int>> matrix(N, vector<int>(M));

    // Input the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    // Create a DP table to store the minimum path sums
    vector<vector<int>> dp(N, vector<int>(M, 0));

    // Fill the dp table
    dp[0][0] = matrix[0][0]; // Starting point

    // Fill the first row (only possible to come from the left)
    for (int j = 1; j < M; j++) {
        dp[0][j] = dp[0][j - 1] + matrix[0][j];
    }

    // Fill the first column (only possible to come from above)
    for (int i = 1; i < N; i++) {
        dp[i][0] = dp[i - 1][0] + matrix[i][0];
    }

    // Fill the rest of the dp table
    for (int i = 1; i < N; i++) {
        for (int j = 1; j < M; j++) {
            dp[i][j] = matrix[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    // The minimum path sum will be in the bottom right cell
    cout << dp[N - 1][M - 1] << endl;

    return 0;
}
