#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--) {
        string s,t;
        cin >> s;
        cin >> t;
        string ans = "";
        
        for(int i = 0 ; i < 5 ; i++) {
            if(s[i] == t[i]) {
                ans += "G" ;
            }
            
            else {
                ans += "B" ;
            }
        }
        
        cout << ans << endl;
        
    }
}
