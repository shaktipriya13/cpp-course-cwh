// Write code to Check if two strings are Anagram or not
#include<iostream>
#include<string>
using namespace std;

int countChar(string n, char d) {
    int c = 0;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == d) {
            c++;
        }
    }
    return c;
}

bool areAnagrams(string a, string b) {
    if (a.length() != b.length()) {
        return false; // Anagrams must have the same length
    }

    for (int i = 0; i < a.length(); i++) {
        int count1 = countChar(a, a[i]);
        int count2 = countChar(b, a[i]);

        if (count1 != count2) {
            return false; // If counts differ for any character, they're not anagrams
        }
    }
    return true; // All characters match in counts
}

int main() {
    if (areAnagrams("siilont", "listono")) {
        cout << "Given strings are anagrams." << endl;
    } else {
        cout << "Given strings are not anagrams." << endl;
    }

    return 0;
}
