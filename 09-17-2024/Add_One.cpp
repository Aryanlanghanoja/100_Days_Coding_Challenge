#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        int carry = 1; 
        for (int i = n - 1; i >= 0; i--) {
            int digit = s[i] - '0' + carry;
            carry = digit / 10; 
            s[i] = (digit % 10) + '0';  
        }

        if (carry) {
            s = '1' + s;  
        }

        cout << s << endl;
    }

    return 0;
}
