#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin >> T;
    
    while(T--) {
        int N;
        cin >> N;
        int max = 0;
        
        for(int i = 0 ; i < N ;i++) {
            int input;
            cin >> input;
            
            if(input  > max) {
                max = input;
            }
        }
        

        cout << max << endl;
        
    }
}
