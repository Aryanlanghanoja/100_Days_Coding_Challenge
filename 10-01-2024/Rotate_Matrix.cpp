#include <bits/stdc++.h>
using namespace std;

// in-place rotation
void rotateClockwise(vector<vector<int> > &mat) {
    reverse(mat.begin(), mat.end());
    for (int i = 0; i < mat.size(); ++i) {
        for (int j = i + 1; j < mat[i].size(); ++j)
            swap(mat[i][j], mat[j][i]);
    }
}

int main() {

  int n;
  cin >> n;
  
  assert(1 <= n && n <= 100);

  vector<vector<int> > mat(n, vector<int> (n));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cin >> mat[i][j];
    }
  }

  rotateClockwise(mat);

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cout << mat[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
} 