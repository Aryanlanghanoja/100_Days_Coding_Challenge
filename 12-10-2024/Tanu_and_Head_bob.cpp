#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t ;
	cin >> t ;
	
	while(t--) {
	    int n ;
	    cin >> n ;
	    
	    string s ;
	    cin >> s ;
	   
	    int count[3] = {0,0,0} ;
	    
	    for(char& ch : s) {
	        if(ch == 'I') {
	            count[0]++;
	        }
	        
	        else if(ch == 'Y') {
	            count[1]++;
	        }
	        
	        else {
	            count[2]++;
	        }
	    }
	    
	    if(count[0] != 0) {
	        cout << "INDIAN" << endl ;
	    }
	    
	    else if(count[1] != 0) {
	        cout << "NOT INDIAN" << endl ;
	    }
	    
	    else {
	        cout << "NOT SURE" << endl ;
	    }
	}

}
