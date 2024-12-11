#include <iostream>
using namespace std;

int main() {
	int t, n, i, *a, swaps;
	cin>>t;
	while(t--)
	{
	    cin>>n; swaps=0;
	    a= new int[n];
	    for(i=0; i<n; i++)
	        cin>>a[i];
	    for(i=0; i<n-1; i++)
	    {
	        if(a[i]>a[i+1])
	        {
	            int temp= a[i+1];
	            a[i+1]= a[i];
	            a[i]= temp;
	            break;
	        }
	    }
	    for(i=0; i<n-1; i++)
	        if(a[i]>a[i+1])
	            swaps++;
	    if(swaps==0)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
