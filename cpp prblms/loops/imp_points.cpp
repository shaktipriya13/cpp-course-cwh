
// The for loop syntax expects a single condition in its middle section, which controls the loop's iteration. In C++, you cannot use , to separate conditions in the middle part of the for loop.

// To achieve the functionality you desire—running two loops simultaneously with different loop termination conditions—you need to use two separate for loops. 

// code:
// Assuming n and m are the sizes of arrays a and b respectively
for(int i = 0, j = 0; i < n && j < m; i++, j++) {
    if(a[i] == b[j]) {
        r++;
    }
}


// When you perform division between two integers (x1, v1, x2, v2 are integers), the result will also be an integer, discarding any fractional part. To ensure floating-point division, you should cast at least one of the operands to a floating-point type before the division.

// cin.ignore();
// cin.ignore() is a function in C++ that's used to clear or ignore characters in the input buffer. It allows you to discard a certain number of characters from the input stream, which can be helpful when dealing with various input types.
