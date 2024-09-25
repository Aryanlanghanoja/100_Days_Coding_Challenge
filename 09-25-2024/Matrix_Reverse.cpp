#include <bits/stdc++.h>

using namespace std;


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
  
  for(int i = n - 1; i >= 0; i--){
    for(int j = 0; j < m; j++){
        cout << mat[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
} 
