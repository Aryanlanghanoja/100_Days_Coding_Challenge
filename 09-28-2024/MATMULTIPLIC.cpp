#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int r1 , c1;
	cin >> r1 >> c1;
	
	vector<vector<int>> matrix1(r1,vector<int>(c1 , 0));
	
	for(int i = 0 ; i < r1 ; i++) {
	    for(int j = 0 ; j < c1 ; j++) {
	        cin >> matrix1[i][j];
	    }
	}

	int r2 , c2;
	cin >> r2 >> c2;
	
	vector<vector<int>> matrix2(r2,vector<int>(c2 , 0));
	
	for(int i = 0 ; i < r2 ; i++) {
	    for(int j = 0 ; j < c2 ; j++) {
	        cin >> matrix2[i][j];
	    }
	}
	
	vector<vector<int>> answer(r1 ,vector<int> (c2,0));
	
	for(int i = 0 ; i < r1 ; i++) {
	    for(int j = 0 ; j < c2 ; j++) {
	        int ans = 0 ;
	        
	        for(int k = 0 ; k < r2 ; k++) {
	            ans += matrix1[i][k]*matrix2[k][j];
	        }
	        
	        answer[i][j] = ans;
	    }
	}
	
	for(int i = 0 ; i < r1 ; i++) {
	    for(int j = 0 ; j < c2 ; j++) {
	        cout << answer[i][j] << " " ;
	    }
	    
	    cout << endl;
	}
	
	return 0;
}
