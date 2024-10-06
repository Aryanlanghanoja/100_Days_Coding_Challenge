#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,m;
    cin>>n>>m;
    vector<int>temp;
    for(int i=0;i<n*m;i++){
        int x;
        cin>>x;
        temp.push_back(x);
    }
    sort(temp.begin(),temp.end());
    cout<<temp[temp.size()/2];
}