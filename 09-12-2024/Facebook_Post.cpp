#include <bits/stdc++.h>
using namespace std;
 
int main() { 
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n], b[n];
        vector<pair<pair<int, int>, int>> Post(n);

        for (int i = 0; i < n; i++) {
            cin >> Post[i].first.first;
            Post[i].second = i + 1;
        }

        for (int i = 0; i < n; i++) {
            cin >> Post[i].first.second;
        }

        sort(Post.begin(), Post.end());
        reverse(Post.begin(), Post.end());

        int max_comments = Post[0].first.second;
        int max_likes = Post[0].first.first;
        int popular_post = Post[0].second;

        int i = 0;

        while (Post[i].first.first == max_likes) {
            if (Post[i].first.second > max_comments) {
                max_comments = Post[i].first.second;
                popular_post = Post[i].second;
            }
            i++;
        }

        cout << popular_post << endl;
    }

    return 0;
}