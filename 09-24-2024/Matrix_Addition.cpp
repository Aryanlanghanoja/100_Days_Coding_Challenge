#include <bits/stdc++.h>
using namespace std;

int main() {

  int m, n;
  cin >> n >> m;

  int a[n][m], b[n][m];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
       cin >> a[i][j];
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
       cin >> b[i][j];
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
       cout << a[i][j] + b[i][j] << ' ';
    }
    cout << endl;
  }

  return 0;
} 