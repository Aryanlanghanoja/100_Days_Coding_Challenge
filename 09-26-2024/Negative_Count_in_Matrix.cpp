#include <iostream>
#include <vector>
using namespace std;

int countNegativeNumbers(vector<vector<int>>& matrix, int N, int M) {
    int count = 0;
    int row = 0, col = M - 1;

    // Start from top-right corner and traverse the matrix
    while (row < N && col >= 0) {
        if (matrix[row][col] < 0) {
            // If element is negative, count all elements in this column below it
            count += (N - row);
            // Move to the left column
            col--;
        } else {
            // Move to the next row
            row++;
        }
    }

    return count;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> matrix(N, vector<int>(M));
    
    // Input the matrix elements
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Output the count of negative numbers
    cout << countNegativeNumbers(matrix, N, M) << endl;

    return 0;
}
