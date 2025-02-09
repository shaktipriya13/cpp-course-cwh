#include<iostream>
#include<string>
using namespace std;

void printValidParentheses(int n) {
    for(int i = 0; i < n; i++) {
        cout << "()";
    }
}

void findLongestValidParentheses() {
    string str;
    cout << "Enter string: ";
    cin >> str;
    int length = str.length();
    int maxValid = 0;
    int openCount = 0, closeCount = 0;

    // Scan the string to find the longest valid substring
    for(int i = 0; i < length; i++) {
        if(str[i] == '(') {
            openCount++;
        } else if(str[i] == ')') {
            closeCount++;
        }

        // Update the maximum valid count if valid parenthesis found
        if(openCount == closeCount) {
            maxValid = max(maxValid, openCount + closeCount);
        } else if(closeCount > openCount) {
            openCount = closeCount = 0;
        }
    }

    cout << "The longest valid parenthesis length is: ";
    printValidParentheses(maxValid / 2); // Divide by 2 as each valid pair requires 2 characters
    cout << endl;
}

int main() {
    findLongestValidParentheses();
    return 0;
}
