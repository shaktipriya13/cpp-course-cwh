// Write code Check if the given string is Palindrome or not
#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false; // If characters don't match, it's not a palindrome

            //after return statement is executed,none of the following code will get executed
        }
    }
    return true; // All characters match, it's a palindrome
}

int main() {
    if (isPalindrome("popp")) {
        cout << "The given string is a palindrome." << endl;
    } else {
        cout << "The given string is not a palindrome." << endl;
    }
    
    return 0;
}
 