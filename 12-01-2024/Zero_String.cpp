#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t ;
	
	while(t--) {
	    int n;
	    cin >> n ;
	    string s ;
	    cin >> s;
	    int zeros = 0 ;
	    int onces = 0 ;
	    
	    for(char& chr : s) {
	        if(chr == '0') {
	            zeros++;
	        }
	        
	        else {
	            onces++;
	        }
	    }
	    
	    if(zeros >= onces) {
	        cout << onces << endl;
	    }
	    
	    else if(zeros < onces) {
	        cout << zeros + 1 << endl;
	    }
	}

}
