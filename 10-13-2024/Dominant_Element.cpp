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
	    unordered_map<int,int> freqcount;
	    
	    for(int i = 0 ; i < n ; i++) {
	        cin >> input[i];
	    }
	    
	    for(int num : input) {
	        freqcount[num]++;
	    }
	    
	    vector<pair<int,int>> freqvector(freqcount.begin() , freqcount.end());
	    int max_freq = -1;
	    int max_freq_count = 0 ;
	    
	    for(int i = 0 ; i < freqvector.size() ; i++) {
	        if(freqvector[i].second > max_freq) {
	            max_freq = freqvector[i].second;
	            max_freq_count = 1;
	        }
	        
	        else if(freqvector[i].second == max_freq) {
	            max_freq_count++;
	        }
	    }
	    
	    if(max_freq_count == 1) {
	        cout << "YES" << endl;
	    }
	    
	    else {
	        cout << "NO" << endl;
	    }
	}
	
	return 0;

}
