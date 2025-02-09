// modified previous code to get the name of the greater variable get printed

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;
    
    const char* varNames[] = {"x", "y"};

    int maxNum = (x > y) ? x : y;
    const char* maxVarName = (x > y) ? varNames[0] : varNames[1];

    cout << "The maximum number is: " << maxNum << endl;
    cout << "The variable containing the maximum number is: " << maxVarName << endl;

    return 0;
}





// varnames is a pointer array...iske indices ke through u can access its elements but since it's declared constant...u can't use these pointers(varnames[0],varnames[1]) to change the value(x,y) stored in pointers

The const char* in const char* varNames[] means that the pointers themselves are not allowed to modify the content they point to. It's not about the characters 'x' and 'y' being treated as constants; rather, it's about creating pointers (varNames[0] and varNames[1]) that point to constant sequences of characters (string literals).


//more explanation:



const char* varNames[] = {"x", "y"};


This line initializes an array called `varNames` that holds pointers to constant characters (`const char*`). Here's a breakdown:

- `const char*`: Indicates that each element of the array `varNames` is a pointer to a constant character (i.e., a string).

- `varNames[]`: Declares an array without specifying its size explicitly. The size is determined by the number of elements in the initializer list (`{"x", "y"}`).

- `{"x", "y"}`: Initializes the array with two string literals.
  - `"x"` and `"y"` are string literals (arrays of characters terminated by a null character `'\0'`).
  - Each element of `varNames` holds the address of the corresponding string literal.

In this context, `varNames` is an array of pointers to two string literals, `"x"` and `"y"`. These string literals are immutable because they are pointers to constant characters (`const char*`), meaning their values cannot be modified.


// a constant character (const char) refers to a character variable that is treated as constant. It's not specifically about a character holding a constant value but rather a variable that, once defined as constant, cannot be modified after initialization.