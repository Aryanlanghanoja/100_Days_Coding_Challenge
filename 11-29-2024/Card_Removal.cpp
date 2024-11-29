#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> Count;
        int max_count = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            Count[x]++;

            if (Count[x] > max_count) {
                max_count = Count[x];
            }
        }

        cout << n - max_count << endl;


    }

}
