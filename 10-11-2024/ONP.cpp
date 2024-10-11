#include <bits/stdc++.h>
using namespace std;

int Precedence(char c) {
    if (c == '^') {
        return 3;
    }
    else if (c == '*' || c == '/') {
        return 2;
    }
    else if (c == '+' || c == '-') {
        return 1;
    }
    else {
        return -1;
    }
}

string infixToPostfix(string infixexpression) {
    stack<char> st;
    string postfixexpression;

    for (int i = 0; i < infixexpression.length(); i++) {
        if ((infixexpression[i] >= 'a' && infixexpression[i] <= 'z') || (infixexpression[i] >= 'A' && infixexpression[i] <= 'Z')) {
            postfixexpression += infixexpression[i]; // Append operands to the postfix expression
        }
        else if (infixexpression[i] == '(') {
            st.push(infixexpression[i]); // Push opening parenthesis onto the stack
        }
        else if (infixexpression[i] == ')') {
            // Pop and append operators until an opening parenthesis is encountered
            while (!st.empty() && st.top() != '(') {
                postfixexpression += st.top();
                st.pop();
            }
            if (!st.empty()) {
                st.pop(); // Discard the opening parenthesis
            }
        }
        else {
            // Pop operators with higher or equal precedence and append them
            while (!st.empty() && Precedence(st.top()) >= Precedence(infixexpression[i])) {
                postfixexpression += st.top();
                st.pop();
            }
            st.push(infixexpression[i]); // Push the current operator onto the stack
        }
    }

    // Append remaining operators from the stack to the postfix expression
    while (!st.empty()) {
        postfixexpression += st.top();
        st.pop();
    }
    return postfixexpression; // Return the final postfix expression
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	    string expression ;
	    cin  >> expression;
	    string result = infixToPostfix(expression);
	    cout << result << endl;
	}

}
