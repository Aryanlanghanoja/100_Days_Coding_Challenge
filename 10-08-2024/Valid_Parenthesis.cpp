#include <bits/stdc++.h>
using namespace std;

bool Is_Balanced(const string &s) {
    stack<char> st;

    for(char ch : s) {
        if(ch == '(') {
            st.push(ch);
        } 
        else if(ch == ')') {
            if(!st.empty() && st.top() == '(') {
                st.pop();
            } 
            else {
                return false;
            }
        }
    }
    
    return st.empty();
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        bool ans = Is_Balanced(s);
        cout << (ans ? 1 : 0) << endl;
    }

    return 0;
}
