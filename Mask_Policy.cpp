#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a;
	    cin>>n>>a;
	    int b=min(a,n-a);
	    cout<<b<<endl;
	}
	return 0;
}