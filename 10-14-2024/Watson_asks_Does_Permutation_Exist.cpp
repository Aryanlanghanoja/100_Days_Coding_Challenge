#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> input(n);
	    
	    for(int i = 0 ; i < n ; i++) {
	        cin >> input[i];
	    }
	    
	    sort(input.begin() , input.end());
	    
	    bool flag = false;
	    
	    for(int i = 0 ; i < n-1 ; i++) {
	        if(abs(input[i] - input[i+1]) > 1) {
	            flag = true;
	            break;
	        }
	    }
	    
	    cout << (!flag ? "YES" : "NO") << endl;
	}

}
