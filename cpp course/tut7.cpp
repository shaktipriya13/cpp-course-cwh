#include<iostream>
using namespace std;
int c=45;
int main(){
    int c=9;
    cout<<"Local c= "<<c<<endl;
    cout<<"Global c= "<<::c<<endl<<endl; //scope resolution operator


    // float d=9.6;
    // long double e=9.6;
    //long double offers higher precision and typically occupies more memory compared to float. Use long double when higher precision is needed, but be aware that it might consume more memory.
    //float takes 4 bytes(32 bits) & long double takes 10 or 16 bytes(80 or 128 bits) depending on the platform.
    float d=9.6;
    long double e=9.l;
    cout<<"value of d = "<<d<<endl<<"value of e= "<<e<<endl<<endl;
    // chaining of cout
    // note:
    // the sizeof operator is used to determine the size of a data type or a variable in terms of bytes. It returns the size of the operand in bytes.eg: sizeof(char)
    // sizeof(98.0l); is valid but sizeof(98f) or sizeof(98l) is not valid.
    // reason: in the case of sizeof operator, it expects a data type or a variable name within parentheses to determine the size in bytes of that type or variable. When you write sizeof(98f) or sizeof(98l), the compiler doesn't recognize 98f or 98l as valid data types or variables. They lack the necessary type qualifiers (float, long, etc.) that the compiler expects to identify a specific data type.

//So, sizeof(98.0f) is valid because 98.0f explicitly indicates a float type, using the f suffix to denote a floating-point number.



// Both `d` and `e` will hold the assigned values in their respective data types after the assignment:

// - `d` is a `float` variable. When `9.6` (considered a `double` literal by default in C/C++) is assigned to `d`, it undergoes a conversion from `double` to `float`. The variable `d` will hold the value `9.6` in `float` format. However, due to the limited precision of `float` compared to `double`, the actual stored value might not be exactly `9.6` but a close approximation.

// - `e` is a `long double` variable. Even though `9.6` is a `double` literal, when assigned to `e`, it will also undergo a conversion to `long double`. `long double` typically provides more precision than `double`. The variable `e` will store the value `9.6` with more precision than `d` because it's a `long double`, but there might still be some precision loss or rounding during this assignment due to how floating-point numbers are represented in memory.

// In summary, after assignment, `d` holds `9.6` as a `float`, and `e` holds `9.6` as a `long double`. Both might have different levels of precision due to their respective data types.

float d=9.6f; //it will take input 9.6 as float unlike it takes doubles when f is not used
long double e=9.6l;


// ================================
    string s="miyhi";
    cout<<sizeof(s); // it will return the size of the string object s, not the length of the string.
    // -->It represents the memory consumed by the string object itself, not just the characters it holds.

    // It typically includes the size of the internal data structures used to manage the string, such as pointers, length, and any additional bookkeeping information.

    int arr[8];
    cout<<sizeof(arr); //32 nas





    
// literals:
// Literals are used to assign values directly to variables or as constants within a program. They come in different types, such as integer literals, floating-point literals, character literals, string literals, and more, depending on the programming language.


// - `d` is a `float` variable initialized with the value `9.6f`. The `f` suffix denotes a `float` literal in C/C++. It explicitly tells the compiler to consider `9.6` as a `float` value. Therefore, `d` will hold the value `9.6` in `float` format, without any implicit conversions.

// - `e` is a `long double` variable initialized with the value `9.6l`. The `l` suffix denotes a `long double` literal. Using `9.6l` ensures that the value `9.6` is treated as a `long double`, and it will be stored as such in the variable `e`.

// These suffixes (`f` for `float` and `l` for `long double`) explicitly specify the data type of the numeric literals, ensuring that the compiler interprets them as the desired type without implicit conversions or potential loss of precision during assignments.

// These suffixes help in explicitly defining the type of the numeric literal and can prevent unintended conversions or loss of precision.




// DIFFERENCE BETWEEN BOTH THE SYNATXES
// In C and C++, numeric literals without any suffixes like `f`, `F`, `l`, or `L` have default data types.

// - **Without a suffix**:
//     - Floating-point literals without a suffix, like `9.6`, are considered `double` by default in C/C++. For instance:
//         ```c++
        double x = 9.6; // The literal 9.6 is a double by default
    //     ```
    // - If directly assigned to a `float` variable without a suffix:
    //     ```c++
        float y = 9.6; // The double literal is implicitly converted to float
        // ```
        // In this case, the `double` literal `9.6` is implicitly converted to a `float` before assignment. This conversion might result in loss of precision because a `float` has less precision compared to a `double`.

    // - For `long double`:
    
        long double z = 9.6; // The double literal is implicitly converted to long double
        
//         Similar to `float`, the `double` literal `9.6` is implicitly converted to a `long double`. However, depending on the platform and compiler, the precision retained might be different from a `double` or `float`.

// - **With explicit suffixes** (`f` or `F` for `float`, `l` or `L` for `long double`):
//     - Using explicit suffixes like `f` or `l` ensures that the compiler interprets the numeric literal as the specified type without any implicit conversions:
//         ```c++
        float a = 9.6f; // Explicitly specifying the literal as float
        long double b = 9.6l; // Explicitly specifying the literal as long double
    // - These suffixes help in explicitly defining the type of the numeric literal and can prevent unintended conversions or loss of precision.
}
