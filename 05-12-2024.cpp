#include <bits/stdc++.h> 

using namespace std; 


int main() 
{ 
    int t; 
    cin >> t; 
    while (t--) { 
        int n; 
        cin >> n; 
        vector<int> p(n); 
        for (int i = 0; i < n; i++) { 
            cin >> p[i]; 
        } 
        int loc1 = find(p.begin(), p.end(), 1) - p.begin(); 
        int locn = find(p.begin(), p.end(), n) - p.begin(); 
        cout << n - 1 - locn + loc1 - (loc1 > locn) << endl; 
    } 
    return 0; 
} 