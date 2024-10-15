#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	int d;
	int pairs = 0;
	cin >> n >> d;
	vector<int> length(n , 0);
	
	for(int i = 0 ; i < n ; i++) {
	    cin >>  length[i];
	}
	
    sort(length.begin() , length.end());
    
    int i = 0 ;
    
    while(i < n - 1) {
        if(abs(length[i] - length[i+1]) <= d) {
            pairs++;
            i++;
        }
        i++;
    }
	
	cout << pairs << endl;

}
