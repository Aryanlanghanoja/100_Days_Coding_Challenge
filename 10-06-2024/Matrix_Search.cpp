#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,m,x;
    cin>>n>>m>>x;
    bool ans = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int k;
            cin>>k;
            if(k==x)
                ans=true;
        }
    }
    cout<<(ans?"YES":"NO");
}