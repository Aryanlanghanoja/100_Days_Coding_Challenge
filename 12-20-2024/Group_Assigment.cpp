#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=1,count1=0,i;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	        cin>>v[i];
	    
	    sort(v.begin(),v.end());
	    
	    for(i=1;i<n;i++)
	    {
	        if(v[i-1]==v[i] && count<v[i-1])
	            count++;
	        else{
	            if(v[i-1]!=count){
	                count1=1;
	                break;
	            }
	            count=1;
	        }
	    }
	    if(v[i-1]!=count){
	        count1=1;
	    }
	    if(count1==0)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}