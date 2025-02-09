// Write a C++ program to reverse a string using recursion
#include <iostream>
using namespace std;

string reverseString(string str) {
    // Base case: If the string is empty, return it as is
    if (str.empty()) {
        return str;
    }
    // Recursive step: Reverse the substring excluding the first character and concatenate the first character
    else {
        return reverseString(str.substr(1)) + str[0];
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
