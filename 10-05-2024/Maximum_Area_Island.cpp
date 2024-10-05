#include <bits/stdc++.h>
using namespace std;

int areaOfIsland(vector<vector<int>>& mat, int i, int j){
    if(i >= 0 && i < mat.size() && j >= 0 && j < mat[0].size() && mat[i][j] == 1){
        mat[i][j] = 0;
        return 1 + areaOfIsland(mat, i + 1, j) + areaOfIsland(mat, i-1, j) 
               + areaOfIsland(mat, i, j - 1) + areaOfIsland(mat, i, j + 1);
    }
    return 0;
}

int maxAreaOfIsland(vector<vector<int>>& mat) {
    int max_area = 0;
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[0].size(); j++) {
            if(mat[i][j] == 1)
                max_area = max(max_area, areaOfIsland(mat, i, j));
        }
    }
    return max_area;
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
    }
  } 
  
  cout << maxAreaOfIsland(mat);


  return 0;
} 