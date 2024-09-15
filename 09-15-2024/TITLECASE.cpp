#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Function to convert string to title case
string toTitleCase(string s) {
    stringstream ss(s);  // To split the string into words
    string word, result = "";

    while (ss >> word) {
        bool isAcronym = true;
        for (char c : word) {
            if (!isupper(c)) {
                isAcronym = false;  // If any character is not uppercase, it's not an acronym
                break;
            }
        }

        if (isAcronym) {
            result += word;  // Keep acronyms unchanged
        } else {
            // Capitalize the first letter, convert the rest to lowercase
            word[0] = toupper(word[0]);
            for (int i = 1; i < word.length(); i++) {
                word[i] = tolower(word[i]);
            }
            result += word;
        }

        result += " ";  // Add space between words
    }

    result.pop_back();  // Remove the trailing space
    return result;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();  // To ignore the newline after the number of test cases

    for (int i = 0; i < T; i++) {
        string S;
        getline(cin, S);
        cout << toTitleCase(S) << endl;
    }

    return 0;
}
