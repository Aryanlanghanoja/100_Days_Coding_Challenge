#include <bits/stdc++.h>
using namespace std;
vector<int> dir = {0,1,0,-1,0};
void bfs(vector<vector<int> > & matrix, int n, int m) {
    queue<pair<int, int>> q;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == 0)
                q.push({i, j});
            else
                matrix[i][j] = -1;
        }
    }
    while (!q.empty()) {
        auto pizda = q.front();
        q.pop();
        for (int i = 0; i < 4; ++i) {
            int newr = pizda.first+dir[i], newc = pizda.second+dir[i+1];
            if (newr<0 || newr==n || newc<0 || newc==m || matrix[newr][newc]!=-1) continue;
            matrix[newr][newc] = matrix[pizda.first][pizda.second]+1;
            q.push({newr, newc});
        }
    }
}
int main() {
	// your code goes here
	int n,m;cin>>n>>m;
	vector<vector<int> > matrix(n, vector<int>(m));
	for (int i = 0; i < n; ++i) {
	    for (int j = 0; j < m; ++j)
	        cin>>matrix[i][j];
	}
	bfs(matrix, n, m);
	for (int i = 0; i < n; ++i) {
	    for (int j = 0; j < m; ++j)
	        cout<<matrix[i][j]<<' ';
	}
	cout<<endl;
}