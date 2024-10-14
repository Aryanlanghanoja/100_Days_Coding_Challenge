#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	    string s;
	    cin >> s;
	    
	    int pairs = 0 ;
	    int i = 0;
	    
	    while(i < s.size() - 1) {
	        if((s[i] == 'x' && s[i+1] == 'y') || (s[i] == 'y' && s[i+1] == 'x')) {
	            pairs++;
	            i++;
	        }
	        i++;
	    }
	    
	    cout << pairs << endl;
	}

}
