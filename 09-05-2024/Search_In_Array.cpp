#include <bits/stdc++.h>
using namespace std;

bool Binary_Search(vector<int>& Array, int key, int left, int right) {
    int mid = left + (right - left) / 2;

    if (left <= right) {

        if (Array[mid] == key) {
            return true;
        }

        else if (key > Array[mid]) {
            return Binary_Search(Array, key, mid + 1, right);
        }

        else {
            return Binary_Search(Array, key, left, mid - 1);
        }
    }

    return false;
}

int main() {
    // your code goes here
    
    cin >> N >> X;
    vector<int> Array(N, 0);

    for (int i = 0; i < N;i++) {
        cin >> Array[i];
    }

    sort(Array.begin(), Array.end());
    bool ans = Binary_Search(Array, X, 0, Array.size() - 1);

    if (ans) {
        cout << "YES";
    }

    else {
        cout << "NO";
    }
}
