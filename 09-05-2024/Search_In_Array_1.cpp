#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	
	int X, N;
	cin >> N >> X;
	bool ans = false;
	
	for(int i = 0 ; i < N;i++) {
	    int element;
	    cin >> element;
	    
	    if(element == X) {
	        ans = true;
	    }
	}
	
	if(ans) {
	    cout << "YES";
	}
	
	else {
	    cout  << "NO";
	}
}
