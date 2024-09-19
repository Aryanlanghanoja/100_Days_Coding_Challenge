#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        // your code goes here
        int alice = 0  ;
        int bob= 0 ;
        char server = 'A' ;
        
        for(int i = 0 ; i < n ; i++) {
            
            if(s[i] == 'A') {
                if(server == 'A') {
                    alice++;
                }
                
                else {
                    server = 'A' ;
                }
            }
            
            else {
                if(server == 'B') {
                    bob++;
                }
                
                else {
                    server = 'B' ;
                }
            }
        }
        
        cout << alice << " " << bob << endl;
    }

}
