#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> inputs(n , 0);
	    
	    for(int i = 0 ; i < n ; i++) {
	        cin>> inputs[i] ;
	    }
	    
	    sort(inputs.begin() , inputs.end());
	    
	    int temp = 1 ;
	    int max = 1 ;
	    
	    for(int i = 0 ; i < n-1 ; i++) {
	        if(inputs[i] == inputs[i+1]) {
	            temp++;
	            
	            if(temp > max) {
	                max = temp;
	            }
	        }
	        
	        else {
	            temp = 1 ;
	        }
	    }
	    
	    cout << n - max << endl;
	}
	
	return 0 ;

}
