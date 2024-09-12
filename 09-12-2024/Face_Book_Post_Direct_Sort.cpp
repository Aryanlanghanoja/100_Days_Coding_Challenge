#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<pair<int, int>, int>> Post(n);

        for (int i = 0; i < n; i++) {
            cin >> Post[i].first.first;  
            Post[i].second = i + 1;      
        }

        // Input comments
        for (int i = 0; i < n; i++) {
            cin >> Post[i].first.second; 
        }

        sort(Post.begin(), Post.end(), [](pair<pair<int, int>, int>& a, pair<pair<int, int>, int>& b) {
            if (a.first.first == b.first.first) {
                return a.first.second > b.first.second; 
            }
            return a.first.first > b.first.first; 
            });

        cout << Post[0].second << endl;
    }

    return 0;
}
