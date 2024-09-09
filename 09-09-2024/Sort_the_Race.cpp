#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        // Find the index of the minimum value among x, y, z
        int min = (x < y) ? ((x < z) ? 0 : 2) : (y < z ? 1 : 2);

        // Correct way to define the string array
        string name[3] = {"ALICE", "BOB", "CHARLIE"};

        // Output the result based on the index
        cout << name[min] << endl;
    }

    return 0;
}
