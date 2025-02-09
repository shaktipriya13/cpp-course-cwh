// function prototypes
// Function prototypes in C++ are declarations that provide information to the compiler about functions before they are actually defined or implemented in the code. They tell the compiler about the function's name, return type, and parameters it expects.

// A function prototype typically includes:

// 1. **Function Name**: The name of the function.
// 2. **Return Type**: The data type of the value the function returns (or `void` if it doesn't return anything).
// 3. **Parameters**: The number, order, and data types of the parameters the function accepts (if any).

// For example, consider this function prototype:


// Function prototype
int add(int a, int b);


// This prototype tells the compiler that there exists a function named `add`, which takes two `int` parameters and returns an `int` value.

// Prototypes are often declared in the beginning of a file, in a header file (.h), or in a separate section at the top of a source file (.cpp) to inform the compiler about the functions that will be defined later in the code. This allows you to call functions before they are implemented, enabling you to organize your code in a top-down manner.

// Here's an example of using a function prototype:

// Function prototype
int add(int a, int b);

int main() {
    int result = add(3, 4);  // Function call before definition
    // ...
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}


// Here, the `main()` function calls `add()` before its actual definition because the compiler knows about the function through the prototype declaration above it.

// Using prototypes helps in modularizing code, making it easier to read and maintain, especially when dealing with large programs where functions may be defined in different parts of the code.