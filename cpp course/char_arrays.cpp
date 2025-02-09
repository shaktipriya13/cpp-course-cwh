
//Char arrys are also clled C-style strings...hs verious inbuilt methods
//This string is actually a one-dimensional array of characters which is terminated by a null character '\0'. it has these funxns: strcpy,strlen,strcatstrcmp,strchr,strstr




//  In C++, character arrays are used to store sequences of characters. They are essentially a contiguous block of memory that holds characters terminated by a null character `'\0'`.

// Here's a basic overview of character arrays in C++:

// ### Declaration and Initialization:

```cpp
char myArray[10]; // Declaring a character array of size 10
char name[] = "John"; // Initializing a character array with a string literal
char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Initializing with individual characters and a null terminator
```

### Accessing and Modifying Elements:

```cpp
char myArray[10]; // Assume this array has been properly initialized

myArray[0] = 'H'; // Assigning a character to the first element
char firstChar = myArray[0]; // Accessing the first character

myArray[1] = 'i'; // Assigning another character
```

### Strings in Character Arrays:

Character arrays are often used to represent strings in C++.

```cpp
char greeting[] = "Hello"; // Initializing a character array with a string literal
cout << greeting; // Output: Hello

// Looping through characters in a character array
for (int i = 0; greeting[i] != '\0'; ++i) {
    cout << greeting[i]; // Output each character individually
}
```

### Null Terminator:

Remember, character arrays representing strings in C++ are terminated with a null character `'\0'`. This character signifies the end of the string.

// ### String Library vs. Character Arrays:

While character arrays are a fundamental way to handle strings in C++, C++ also provides a robust `std::string` library that offers more functionality and safety when working with strings. `std::string` dynamically manages memory, handles resizing, and provides various string manipulation functions, making it a more flexible choice compared to raw character arrays in many scenarios.

In modern C++ code, `std::string` is often preferred over character arrays due to its ease of use and safety features. However, understanding character arrays is still valuable, especially when working with legacy code or situations where low-level manipulation is necessary.

// NOTE:
    char arr[]={'a','b','c'};
    cout<<arr;

In this code, when you try to print the character array arr using cout, it won't print the contents of the array as a string as you might expect.

When you use cout << arr; with a character array, it treats arr as a pointer to the first element of the array. Consequently, it tries to output a C-style string starting from the memory address where arr begins, until it encounters a null terminator ('\0'). However, the array arr doesn’t have a null terminator explicitly included, so cout continues reading the memory until it finds a null character elsewhere in memory, which can lead to unexpected behavior and potentially printing unintended characters or garbage values after the array.


// printing array elements:

// code:
char arr[]={'h','e','l','l','o'};
    for(int i=0;arr[i]!='\0';i++){
        cout<<arr[i]<<endl;
    }
    // will give error



The error isn't a syntactical one, but it could be a logical issue. In C and C++, strings are conventionally represented as null-terminated character arrays, where the null character '\0' signifies the end of the string.

In your code, you've initialized an array arr without explicitly adding a null terminator '\0' at the end. The loop condition arr[i] != '\0' checks for the presence of the null character to determine the end of the string. Since arr doesn't contain a '\0' explicitly, this loop won't stop until it reaches some unintended '\0' further down in memory, causing a buffer overrun and resulting in undefined behavior.

To fix this, you should add the null terminator '\0' explicitly at the end of the arr array to properly represent it as a null-terminated string:

// corrected code:
char arr[]={'h','e','l','l','o','\0'};
    for(int i=0;arr[i]!='\0';i++){
        cout<<arr[i]<<endl;
    }


