#include <bits/stdc++.h>
using namespace std;

int minTimeToRot(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    vector<vector<int>> visited = grid;
    
    queue<pair<int, int>> rottenQueue;
    int freshOrangeCount = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (visited[i][j] == 2) {
                rottenQueue.push({i, j});
            }
            if (visited[i][j] == 1) {
                freshOrangeCount++;
            }
        }
    }
    
    if (freshOrangeCount == 0)
        return 0;
    if (rottenQueue.empty())
        return -1;
    
    int minutes = -1;
    vector<pair<int, int>> directions = {{1, 0},{-1, 0},{0, -1},{0, 1}};
    
    while (!rottenQueue.empty()) {
        int size = rottenQueue.size();
        while (size--) {
            auto it = rottenQueue.front();
            int x = it.first;
            int y = it.second;
            rottenQueue.pop();
            for (auto it : directions) {
                int i = x + it.first;
                int j = y + it.second;
                if (i >= 0 && i < rows && j >= 0 && j < cols && visited[i][j] == 1) {
                    visited[i][j] = 2;
                    freshOrangeCount--;
                    rottenQueue.push({i, j});
                }
            }
        }
        minutes++;
    }
    
    if (freshOrangeCount == 0)
        return minutes;
    return -1;
}



int main() {

  int n, m;
  cin >> n >> m;

  assert(1 <= n && n <= 100);
  assert(1 <= m && m <= 100);

  vector<vector<int> > mat(n, vector<int> (m));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cin >> mat[i][j];
        int x = mat[i][j];
        assert(x == 0 || x == 1 || x == 2);
    }
  } 
  
  cout << minTimeToRot(mat);


  return 0;
} 