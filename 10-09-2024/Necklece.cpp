#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    queue<int>q;
	    vector<int>f;
	    while(n--){
	        int v;
	        cin>>v;
	        q.push(v);
	    }
	    while(k--){
	        int j = q.front();
	        q.pop();
	        f.push_back(j);
	    }
	    while(!q.empty()){
	        cout<<q.front()<<" ";
	        q.pop();
	    }
	    for(int i = 0;i<f.size();i++)cout<<f[i]<<" ";
	    cout<<endl;
	    
	}
	return 0;
}
