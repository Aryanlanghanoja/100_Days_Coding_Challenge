#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t ;
	
	while(t--) {
	    int x;
	    cin >> x;
	    
	    int cost = x % 10 >= 5 ? (x- (x % 10) + 10) : (x - (x % 10));
	    
	    cout << 100 - cost << endl;
	}

}
