//Given a string, say S, print it in reverse manner eliminating the repeated characters and spaces.

#include <iostream>
#include <string>
using namespace std;

string reverseString(string s) {
    int n = s.size();

    // Reverse the string
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }

    // Remove duplicates and spaces
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ' && s.find(s[i], 0) == i) {
            s[j++] = s[i];
        }
    }

    // Resize the string to the new size (without duplicates and spaces)
    s.resize(j);

    return s;
}

int main() {
    string input = "hello world and good morning";
    cout << "Original string: " << input << endl;

    string reversedWithoutDuplicates = reverseString(input);

    cout << "Reversed string without duplicates: " << reversedWithoutDuplicates << endl;

    return 0;
}
