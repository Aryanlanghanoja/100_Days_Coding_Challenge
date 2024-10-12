#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	   int n;
	   cin >> n;
	   set<int> dates;
	   
	   for(int i = 0 ; i < n ; i++) {
	       int input;
	       cin >> input;
	       dates.insert(input);
	   }
	   
	   cout << dates.size() << endl;
	}
	

}
