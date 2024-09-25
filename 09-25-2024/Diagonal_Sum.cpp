#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<vector<int>> Matrix(n , vector<int>(n));
	
	for(int i = 0 ; i < n; i++) {
	    for(int j = 0 ; j < n ; j++) {
	        cin >> Matrix[i][j];
	    }
	}
	
	int sum = 0 ;
	for(int i = 0 ; i < n ;i++) {
	    sum += Matrix[i][i] + Matrix[i][n-1-i];
	}
	
	if(n % 2 != 0) {
	    sum -= Matrix[n/2][n/2];
	}
	
	cout << sum << endl;

}
