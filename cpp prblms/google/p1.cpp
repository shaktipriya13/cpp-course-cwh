// Given a string S consisting of opening and closing parenthesis '(' and ')'. Find length of the longest valid parenthesis substring.

// A parenthesis string is valid if:

// For every opening parenthesis, there is a closing parenthesis.
// Opening parenthesis must be closed in the correct order.

#include <iostream>
#include <stack>
using namespace std;

int longestValidParentheses(string s) {
    int maxLength = 0;
    stack<int> st;
    st.push(-1); // Initialize stack with an initial index

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i); // Push index of '(' to stack
        } else { // For ')' encountered
            st.pop(); // Pop the '(' index from the stack

            if (!st.empty()) {
                maxLength = max(maxLength, i - st.top());
            } else {
                st.push(i); // Reset the starting index if stack is empty
            }
        }
    }
    return maxLength;
}

int main() {
    string input;
    cout << "Enter a string with parentheses: ";
    cin >> input;

    int result = longestValidParentheses(input);
    cout << "Length of the longest valid parentheses substring: " << result << endl;

    return 0;
}
