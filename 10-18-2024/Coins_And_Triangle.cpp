#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	  long long n;
	  cin>>n;
	 long long start=1,final=n;
	 long long  mid;
	  long long  ans,res;
	
	  while(start<=final)
	  {
	    mid=(start+final)/2;  
	    
	    res=(mid)*(mid+1)/2;
	    
	     
	    if(res<=n)
	   
	     {
	         ans=mid;
	         start=mid+1;
             	     
 	     }
 	     else 
 	     {
 	        final=mid-1;
 	         
 	     }
 	     
 	     
	  }
	  cout<<ans<<endl;
	  
	    
	}
	return 0;
}