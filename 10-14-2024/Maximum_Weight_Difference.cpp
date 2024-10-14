#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    int k;
	    cin >> n >> k;
	    vector<int> weight(n);
	    
	    for(int i = 0 ; i < n ; i++) {
	        cin >> weight[i];
	    }
	    
	    sort(weight.begin() , weight.end());
	    
	    int chef_weight = 0;
	    int son_weight = 0;
	    
	    for(int i = 0 ; i < n ; i++) {
	        if(i < k) {
	            son_weight += weight[i];   
	        }
	        
	        else {
	            chef_weight += weight[i];
	        }
	    }
	    
	    int p1 = abs(chef_weight - son_weight);
	    
	    chef_weight = 0;
	    son_weight = 0;
	    
	    for(int i = 0 ; i < n ; i++) {
	        if(i < n - k) {
	            chef_weight += weight[i];   
	        }
	        
	        else {
	            son_weight += weight[i];
	        }
	    }
	    
	    int p2 = abs(chef_weight - son_weight);
	    
	    cout << max(p1 , p2) << endl;
	}

}
