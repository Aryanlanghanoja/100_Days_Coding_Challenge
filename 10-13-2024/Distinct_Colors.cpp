#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    int max = 0 ;
	    
	    for(int i = 0 ;  i < n ; i++) {
	        int input ;
	        cin >> input;
	        
	        if(input > max) {
	            max = input;
	        }
	    }
	    
	    cout << max << endl;
	}

}
