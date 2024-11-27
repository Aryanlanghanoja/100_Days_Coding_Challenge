#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    cout<<(a>50?"A":(b>50?"B":(c>50?"C":"NOTA")))<<endl;
	}
	return 0;
}