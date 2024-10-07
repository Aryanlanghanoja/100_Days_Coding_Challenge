#include <iostream>

#include <vector>

using namespace std;

vector < int > spiralOrderAnticlockwise(vector < vector < int >> & matrix) {
    vector < int > result;
    if (matrix.empty()) return result;

    int rows = matrix.size();
    int cols = matrix[0].size();
    int left = 0, right = cols - 1, top = 0, bottom = rows - 1;

    while (left <= right && top <= bottom) {
        // Traverse from top to bottom along the left column
        for (int i = top; i <= bottom; ++i) {
            result.push_back(matrix[i][left]);
        }
        left++;

        // Traverse from left to right along the bottom row
        for (int i = left; i <= right; ++i) {
            result.push_back(matrix[bottom][i]);
        }
        bottom--;

        if (left <= right) {
            // Traverse from bottom to top along the right column
            for (int i = bottom; i >= top; --i) {
                result.push_back(matrix[i][right]);
            }
            right--;
        }

        if (top <= bottom) {
            // Traverse from right to left along the top row
            for (int i = right; i >= left; --i) {
                result.push_back(matrix[top][i]);
            }
            top++;
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector < vector < int >> matrix(n, vector < int > (n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector < int > result = spiralOrderAnticlockwise(matrix);

    for (int num: result) {
        cout << num << " ";
    }

    return 0;
}