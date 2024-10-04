#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> matrix(N, vector<int>(M, 0));

    // Reading the matrix input
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    int toprow = 0, bottomrow = N - 1;
    int leftcol = 0, rightcol = M - 1;

    // Spiral order traversal
    while (toprow <= bottomrow && leftcol <= rightcol) {
        // Traverse from left to right on the top row
        for (int i = leftcol; i <= rightcol; i++) {
            cout << matrix[toprow][i] << " ";
        }
        toprow++;

        // Traverse from top to bottom on the right column
        for (int i = toprow; i <= bottomrow; i++) {
            cout << matrix[i][rightcol] << " ";
        }
        rightcol--;

        // Traverse from right to left on the bottom row, if applicable
        if (toprow <= bottomrow) {
            for (int i = rightcol; i >= leftcol; i--) {
                cout << matrix[bottomrow][i] << " ";
            }
            bottomrow--;
        }

        // Traverse from bottom to top on the left column, if applicable
        if (leftcol <= rightcol) {
            for (int i = bottomrow; i >= toprow; i--) {
                cout << matrix[i][leftcol] << " ";
            }
            leftcol++;
        }
    }

    cout << endl;
    return 0;
}
