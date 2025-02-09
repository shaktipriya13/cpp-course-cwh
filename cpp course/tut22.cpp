// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods(fxns)
// classes --> structures + more(public,private vars,fxns..etc)
// classes --> can have methods and properties(variables,attributes)
// classes --> can make few members as private & few as public

// structures in C++ are typedefed- you can create a new name (alias) for a structure type using the typedef keyword

// generally structures are not named as classes...so they need to be typedef when they require name:
typedef struct {
    int x;
    int y;
} Point;
// In C++, classes are not typically typedefed in the same way structures are. The typedef keyword is primarily used to create an alias for a data type, making it easier to use and more readable in code. However, classes in C++ are already named entities, so there's usually no need to typedef them.

// There's usually no need to typedef a class in C++, as you can use the class name directly. However, you can create a typedef for a class type if you want to create an alias for it:


// typedef MyClass AnotherName;
// 
// But this usage is less common in C++, especially for classes. It's more often used for complex template types or function pointers.





-------------------------------------------------------------------
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */   //harry,lovish,rohan are objects
// ->when you declare objects directly after the class definition without the need for the class keyword, it's known as creating instances or objects of that class and not typedef

// ----------------------------------------------------------------
// harry.salary = 8 makes no sense if salary is private

