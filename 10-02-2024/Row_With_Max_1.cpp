#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int row;
	int col;
	
	cin >> row >> col ;
	vector<vector<int>> matrix(row,vector<int> (col , 0));
	int row_with_max_1 = 0;
	int max_1 = 0;
	
	for(int i = 0 ; i < row ; i++) {
	    int curr_1 = 0;
	    for(int j = 0 ; j < col ; j++) {
	        cin >> matrix[i][j];
	        
	        if(matrix[i][j] == 1) {
	            curr_1++;
	        }
	    }
	    
	    if(curr_1 > max_1) {
	        max_1 = curr_1;
	        row_with_max_1 = i+1 ;
	    }
	}
	
	cout << row_with_max_1 << endl;
	
	return 0;
}
