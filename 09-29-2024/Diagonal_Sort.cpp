#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int row , col;
	cin >> row >> col;
	
	vector<vector<int>> matrix(row , vector<int> (col,0));
	unordered_map<int , vector<int>> mp;
	
	for(int i = 0 ; i < row ; i++) {
	    for(int j = 0 ; j < col ; j++) {
	        cin >> matrix[i][j] ;
	        mp[i-j].push_back(matrix[i][j]);
	    }
	}
	
	for(auto &it : mp) {
	    sort(it.second.begin() , it.second.end());
	}
	
	for(int i = row-1 ; i >= 0 ; i--) {
	    for(int j = col - 1 ; j >= 0 ; j--) {
	        matrix[i][j] = mp[i-j].back();
	        mp[i-j].pop_back();
	    }
	}
	
	for(int i = 0 ; i < row ; i++) {
	    for(int j = 0 ; j < col ; j++) {
	        cout << matrix[i][j] << " " ;
	    }
	    cout << endl;
	}
	
    
    return 0;
}
