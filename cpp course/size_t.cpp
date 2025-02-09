/*What is size_t?
size_t is a special type in C++ used to represent sizes of objects and indexing. Think of it as a type of number that is always non-negative (it can't be negative). It is used mainly when you are counting things or measuring the size of something.

Why do we use size_t?
Non-Negative: size_t is guaranteed to be non-negative. This makes it perfect for things like the size of an array, length of a string, or any situation where you can't have a negative number.

Efficiency: It's designed to be the most efficient size for your computer's architecture. This means it will be the best fit for your system, whether your computer uses 32-bit or 64-bit numbers.

Where do we see size_t?
You often see size_t in C++ when dealing with standard library functions. For example:

Array Indexing: When you work with arrays or vectors and need to loop through them, the index is often a size_t type.
String Length: Functions that return the length of a string, like std::string::size(), return a size_t.
Example
Here's a simple example to show you how size_t is used:*/

#include <iostream>
#include <string>

int main() {
    std::string myString = "Hello, World!";
    
    // Get the size of the string
    size_t length = myString.size();
    
    // Print each character of the string
    for (size_t i = 0; i < length; ++i) {
        std::cout << myString[i] << std::endl;
    }

    return 0;
}
/*Explanation of the Example
Getting the Size: myString.size() returns the length of the string, which is stored in a size_t variable called length.

Looping Through the String: The for loop uses size_t i to go from 0 to length - 1. This means it loops through each character in the string.

Printing Characters: Inside the loop, myString[i] accesses each character of the string and prints it.

Why Not Just Use int?
Portability: size_t is more portable across different systems. An int might be 32 bits on some systems and 64 bits on others, which could cause problems if your array is really large.
No Negative Values: Using size_t prevents errors related to negative values. You don't have to worry about accidentally getting a negative number when working with sizes or indices.
Summary
size_t is a special type for sizes and counts that is always non-negative and fits well with the computer's architecture. It's used in many standard library functions and is the best choice for things like array indices and string lengths.*/

/*In C++, size_t is an unsigned type, which means it can only represent non-negative values. It is typically used for sizes and counts, such as array indices or the result of the sizeof operator.

What Happens with a Negative Number?
If you try to assign a negative number to a variable of type size_t, the negative value will be converted to a very large positive value. This happens because size_t cannot represent negative numbers.

Here’s an example to illustrate this:*/
#include <iostream>

int main() {
    int negativeNumber = -5;
    size_t unsignedNumber = negativeNumber;

    std::cout << "Negative number: " << negativeNumber << std::endl;
    std::cout << "Unsigned number: " << unsignedNumber << std::endl;

    return 0;
}
/*Explanation
Assigning Negative Value to size_t: When negativeNumber (which is -5) is assigned to unsignedNumber (of type size_t), the negative value is converted to an unsigned value.

Conversion: The conversion happens using modulo arithmetic. The exact value of unsignedNumber will be the result of adding a large enough multiple of the maximum value representable by size_t until the value becomes non-negative. In most systems where size_t is 32-bit, -5 would convert to 4294967291 because 4294967291 is UINT_MAX - 4.

Output
The output of the above program will be something like this (depending on the system architecture):


Negative number: -5
Unsigned number: 4294967291

Understanding the Conversion
To understand how the conversion works, consider that size_t on a typical 32-bit system can represent values from 0 to 4294967295 (which is 2^32 - 1). When you assign -5 to a size_t variable, it wraps around to a large positive number because of how binary representation and modulo arithmetic work in unsigned types.

Summary
Unsigned Type: size_t can only represent non-negative numbers.
Conversion: Assigning a negative number to a size_t variable results in conversion to a large positive number.
Wrap-around: This happens due to modulo arithmetic, which effectively wraps the value around the maximum representable value of the unsigned type.
Using size_t is safe and intended for sizes and indices, ensuring non-negative values and avoiding issues related to negative numbers in such contexts.*/