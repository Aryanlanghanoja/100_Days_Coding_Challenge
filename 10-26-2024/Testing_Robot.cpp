#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    unordered_set<int>us; // we decleare unordered_set
	    int n,x;
	    cin>>n>>x;
	    string s;
	    cin>>s;
	    us.insert(x);// first we insert initial position 
	    for(int i=0;i<n;i++){
	        if(s[i]=='L'){
	            x=x-1;
	            us.insert(x);
	        }else{
	            x=x+1;
	            us.insert(x);
	        }
	    }
	    cout<<us.size()<<endl;
	}
	return 0;
}