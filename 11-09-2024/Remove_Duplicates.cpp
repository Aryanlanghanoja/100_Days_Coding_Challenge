#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        set<int> unique_elements(a.begin(), a.end());

        cout << unique_elements.size() << endl;

        for (int elem : unique_elements) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
