// content: how to dynamically allocate and deallocate an int, a float or contiguous block of memory

#include<iostream>
using namespace std;
/*
Note:
New keyword---
In C++, the new keyword is used to dynamically allocate memory for an object or a primitive data type on the heap. It returns a pointer to the allocated memory. When dealing with pointers and object-oriented programming (OOP) concepts, new is often used in conjunction with classes to create objects.

The new operator denotes a request for memory allocation on the Free Store. If sufficient memory is available, a new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable. 


Syntax to use new operator:

pointer-variable = new data-type;
*/
int main(){
    int a=9;
    int *ptr=&a;
    cout<<"value at add a:"<<*ptr<<endl;
    cout<<"address of a is: "<<ptr<<endl;
    cout<<"address of a is: "<<&a<<endl;

    //new operator
    int *p=new int(40);
    cout<<"value at address p is: "<<*p<<endl;
    float *p1=new float(40.78);
    cout<<"value at address p1 is: "<<*p1<<endl;

    //making integer array(a block of memory)
    int*arr= new int[3];
    /*syntax:
    datatype*ptr_name = new datatype(value); -->for single value allocation

    datatype*ptr_name = new datatype[array count]; -->for array allocation
    */
    arr[0]=10;
    // arr[1]=20;
    *(arr+1)=20;
    arr[2]=30; 

    *(arr+30)=896; 

    //Accessing memory beyond the bounds of allocated memory leads to undefined behavior. It may not necessarily throw an error at runtime, but it can lead to unexpected results, crashes, or other issues in your program.eg:

    //if memory is not available at runtime, the it will throw error
    // delete arr; -->deletes some elements of array
    // delete[] arr; -->deletes entire array
    //This deallocates the memory allocated for the array. After this line, the memory previously pointed to by arr is no longer valid.
    //*(arr) if tries to access the first element of the deallocated array. This is undefined behavior and could result in printing garbage values or crashing the program.

    // accessing memory that has been freed by delete[] leads to undefined behavior. It's unpredictable and can vary between different runs or compilers. 
    cout<<"The value of arr[0] is: "<<arr[0]<<endl;
    cout<<"The value of arr[1] is: "<<arr[1]<<endl;
    cout<<"The value of arr[2] is: "<<arr[2]<<endl;

    //delete operator-it is used to free up the memory space

    // In C++, the delete keyword is used to deallocate memory that was allocated dynamically using the new keyword. When you allocate memory dynamically with new, it reserves memory on the heap. If this memory isn't deallocated properly, it can lead to memory leaks.

    //the "heap" refers to a region of a computer's memory where dynamic memory allocation occurs
   
    return 0;
}

/*note:
In C++, the malloc() function exists in the C standard library (defined in <cstdlib>) and serves the purpose of dynamically allocating memory. 

The main difference between malloc() and new is that malloc() only allocates memory, while new both allocates memory and calls the constructor for non-primitive types.

----->Constructor Invocation:
 If the object being created has a constructor, the constructor is called to initialize the object. The constructor is responsible for initializing the state of the object, setting up any member variables, and performing any necessary initialization logic.


 Similarly, free() is used to deallocate memory allocated by malloc(), and delete is used to deallocate memory allocated by new.

However, in modern C++, the preferred way to allocate memory dynamically is by using the new and delete operators.

1) new is an operator, malloc is a function 
2) new calls constructor, malloc doesn't 
-->When you use new to create an object, it also calls the constructor of that object.

3) new returns appropriate pointer, malloc returns void pointer and pointer needs to typecast to appropriate type.


-->How  DMA is different from memory allocated to normal variables? 

For normal variables like “int a”, “char str[10]”, etc, memory is automatically allocated and deallocated. For dynamically allocated memory like “int *p = new int[10]”, it is the programmer’s responsibility to deallocate memory when no longer needed. If the programmer doesn’t deallocate memory, it causes a memory leak (memory is not deallocated until the program terminates). 


Normal Array Declaration vs Using new :
There is a difference between declaring a normal array and allocating a block of memory using new . The most important difference is, that normal arrays are deallocated by the compiler (If the array is local, then deallocated when the function returns or completes). However, dynamically allocated arrays always remain there until either they are deallocated by the programmer or the program terminates.
*/