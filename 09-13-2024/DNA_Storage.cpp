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
        string answer = "";
        for(int i = 0 ; i  < n / 2; i++) {
            if(s[2*i] == '0' && s[2*i + 1] == '0') {
                answer += 'A';
            } 
            
            else if(s[2*i] == '0' && s[2*i + 1] == '1') {
                answer += 'T';
            } 
            
            else if(s[2*i] == '1' && s[2*i + 1] == '0') {
                answer += 'C';
            } 
            
            else if (s[2*i] == '1' && s[2*i + 1] == '1') {
                answer += 'G';
            }
        }
        
        cout << answer << endl;
    }

}
