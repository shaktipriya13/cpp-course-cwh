//Given a string str, convert the first letter of each word in the string to uppercase. 

#include <iostream>
using namespace std;

string transform(string s) {
    int n = s.size();
    if (n == 0) {
        return s; // If the string is empty, return it as is
    }

    s[0] = toupper(s[0]); // Capitalize the first character

    for (int i = 1; i < n; i++) {
        if (s[i - 1] == ' ' && islower(s[i])) {
            s[i] = toupper(s[i]); // Capitalize character after spaces if it's a lowercase alphabet
        }
    }
    return s;
}

int main() {
    string s = "   i love you";
    string n = transform(s);
    cout << n;

    return 0;
}

// note: wrong code:
int n = s.size();
s[0] = s[0] - 'a' + 'A';
for (int i = 0; i < n; i++)
{
    if (s[i] == ' ')
    {
        s[i + 1] = s[i + 1] - 'a' + 'A';  
        // s[i+1]=toupper(s[i+1]); ..correct
        //more good method is to use toupper fxn bcoz spaces ke liye ascii value may give error

        // The ASCII value of a space character in C++ is 32.
    }
}
it don;t runs for :"   i love you"

it's wrong bcoz:
The expression s[i+1] = s[i+1] - 'a' + 'A'; assumes that the character at s[i+1] is a lowercase letter and then performs arithmetic to convert it to uppercase. However, in the provided string " i love you", the character after the space is not a lowercase letter ('i') but a space (' ').
