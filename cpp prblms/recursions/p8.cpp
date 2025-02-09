// leran this code by heart<>
// Write a C++ program to implement a recursive function to generate all permutations of a given string.
#include <iostream>
using namespace std;

// Function to swap characters in a string
void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}
static int c=0;
// Recursive function to generate permutations
void generatePermutations(string str, int left, int right) {
    if (left == right) {
        // When left becomes equal to right, it indicates that the function has reached a point where it's considering a single character or the last character in the string.

        cout << str << endl; 
        // Base case: Print the permutation
        c+=1;
    } else {
        for (int i = left; i <= right; i++) {
            swap(str[left], str[i]); // Fix one character

            generatePermutations(str, left + 1, right); // Recur for remaining characters

            swap(str[left], str[i]); // Backtrack to original string
        }
    }
}

int main() {
    string input = "ABC";
    int length = input.length();
    generatePermutations(input, 0, length - 1); // Start with left = 0 and right = length - 1
    cout<<"no. of permutations: "<<c;
    return 0;
}

// explanation:
Absolutely, let's break down the `generatePermutations` function and illustrate how it works with a dry run using the input string "ABC".

### Function Explanation:

This function generates permutations of a string by recursively swapping characters to create all possible arrangements.

```cpp
void generatePermutations(string str, int left, int right) {
    if (left == right) {
        cout << str << endl; // Base case: Print the permutation
    } else {
        for (int i = left; i <= right; i++) {
            swap(str[left], str[i]); // Fix one character

            generatePermutations(str, left + 1, right); // Recur for remaining characters

            swap(str[left], str[i]); // Backtrack to original string
        }
    }
}
```

### Dry Run Example with Input "ABC":

- **Initial Call:** `generatePermutations("ABC", 0, 2)`
- The function is called with the input string "ABC" and range indices 0 and 2 (indicating the whole string).

#### Iteration 1:
- `left = 0`, `right = 2`
- The function enters the `else` block as `left` is not equal to `right`.
- It enters the `for` loop:
  - `i` starts at `0`.
  - `swap(str[0], str[0])`: No change in the string as swapping the character with itself does nothing.
  - `generatePermutations("ABC", 1, 2)` is called recursively.

#### Iteration 2:
- `left = 1`, `right = 2`
- Enters the `for` loop:
  - `i` starts at `1`.
  - `swap(str[1], str[1])`: No change in the string.
  - `generatePermutations("ABC", 2, 2)` is called recursively.

#### Iteration 3:
- `left = 2`, `right = 2`
- `left` is equal to `right`, indicating the base case.
- `cout << str << endl;` prints the permutation: "ABC".

#### Backtracking:
- The function backtracks to the previous recursive call.
- Backtracks further until it completes all iterations and backtracks from the initial call.

### Output:
The function generates and prints all permutations of the string "ABC": "ABC", "ACB", "BAC", "BCA", "CBA", "CAB".

This process demonstrates how the function generates permutations by recursively swapping characters and backtracking to explore all possible arrangements of the input string.
