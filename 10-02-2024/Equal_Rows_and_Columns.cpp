#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    vector<vector<int>>a(n,vector<int>(n));
    vector<vector<int>>b(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            b[j][i] = a[i][j];
        }
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j])
                cnt++;
        }
    }
    cout<<cnt;
}