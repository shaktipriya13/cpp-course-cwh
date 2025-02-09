/*What is string::npos?
string::npos is a special constant in C++ that is used with the std::string class. It stands for "no position" or "not found."

When is string::npos Used?
When you are working with strings in C++, you might want to search for a specific character or substring within a larger string. For example, you might want to find where the letter 'a' is in the string "banana". C++ provides functions like find() to help you do this.

If the character or substring is found, find() returns the position (index) of where it is in the string.
If the character or substring is not found, find() returns string::npos.
Why Use string::npos?
string::npos is a very large number. It is used to indicate that the search did not find the character or substring. Instead of returning a valid index (like 0, 1, 2, etc.), it returns this special value to tell you that the search failed.

Example
Let's look at a simple example to understand this better.*/
#include <iostream>
#include <string>

int main() {
    std::string text = "hello world";
    
    // Try to find the position of 'w'
    size_t position = text.find('w');
    
    if (position != std::string::npos) {
        // 'w' was found
        std::cout << "'w' found at position: " << position << std::endl;
    } else {
        // 'w' was not found
        std::cout << "'w' not found" << std::endl;
    }

    // Try to find the position of 'z'
    position = text.find('z');
    
    if (position != std::string::npos) {
        // 'z' was found
        std::cout << "'z' found at position: " << position << std::endl;
    } else {
        // 'z' was not found
        std::cout << "'z' not found" << std::endl;
    }

    return 0;
}
/*Explanation
Find 'w':

We search for the letter 'w' in the string "hello world".
The find('w') function finds 'w' at position 6.
Since position is not string::npos, it prints "'w' found at position: 6".
Find 'z':

We search for the letter 'z' in the string "hello world".
The find('z') function does not find 'z', so it returns string::npos.
Since position is string::npos, it prints "'z' not found".
Summary
string::npos: A special constant used to indicate that something was not found in a string.
Usage: Returned by functions like find() when the search fails.
Comparison: Check if a search failed by comparing the result to string::npos.
Using string::npos helps you handle cases where the search in a string does not succeed, providing a clear way to check and respond to such situations.





*/