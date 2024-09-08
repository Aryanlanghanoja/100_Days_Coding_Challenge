#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int max = a[0];
        int second_max = 0;
    
        for (int i = 1; i < n; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }
    
        for (int i = 0; i < n; i++) {
            if (a[i] > second_max && a[i] != max) {
                second_max = a[i];
            }
        }
        
        int max_sum = max + second_max;
        
        cout << max_sum << endl;
    }
	// your code goes here

}
