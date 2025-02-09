
#include <iostream>
#include <string>
using namespace std;

void generatePermutations(string str, int left, int right) {
    if (left == right) {
        cout << str << endl;  // Print the permutation when the string is fully rearranged
    } else {
        for (int i = left; i <= right; ++i) {
            swap(str[left], str[i]);  // Swap characters
            generatePermutations(str, left + 1, right);  // Recursively generate permutations for the remaining characters
            swap(str[left], str[i]);  // Backtrack: restore the original string for the next iteration
        }
    }
}

void printAllPermutations(string str) {
    int length = str.size();
    generatePermutations(str, 0, length - 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "All permutations of the string are: " << endl;
    printAllPermutations(input);

    return 0;
}
