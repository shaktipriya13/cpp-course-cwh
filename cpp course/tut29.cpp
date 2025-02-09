// classes are a custom datatype only
//to skip writing fxns like setData() inside a class ,we use constructors...so that they automatically set data

/*Constructors in C++

 a contructor is just like a fxn only

A constructor is a special member function with the same name as the class. The constructor doesn’t have a return type. Constructors are used to initialize the objects of its class. Constructors are automatically invoked whenever an object is created.

Important Characteristics of Constructors in C++

-A constructor should be declared in the public section of the class but they can be made private also.
-They are automatically invoked whenever the object is created
-They cannot return values and do not have return types
-It can have default arguments....as it behaves just like a fxn
-We cannot refer to their address
*/

//In C++, constructors don't have an explicit return type specified in their declaration. They do not specify a return type, not even "void".


// Constructors are automatically called when an object of a class is created and are responsible for initializing the object....

#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        // creating constructor
        complex(void);  //constructor declaration
        // u can even define the constructor fxn here just like normal member fxn of any class
        
        //note:return type of constructor is not to write
        void printData()
        {
            cout << "your number is: " << a << " + " << b << "i" << endl;
        }
        
};

// complex::complex(int a=9) ...can accept default arguments while defining
complex::complex(void){  //------ this is a default constructor as it accepts no parameters
    a=0;  //here we set 0 value to complex numbers on initialization
    b=0;
    cout<<"hello world\n";
    // jo bhi code hoga constructor ke andar ha wo run ho jayega
}
int main(){
    complex c1;  //agar value ko no. set krke print krogi toh u will get a garbage value
    c1.printData();
    // on creating the object of the class, automatically the constructor fxn is invoked bcoz the constructor fxn and the class hv the same names

    complex c2;  
    c2.printData();

    complex c3;  
    c3.printData();
    // kitne bhi objects banao sabki value automatic set ho jayegi
    
    return 0;
}

//note:
// In C++, you can't create a member function that has the same name as the class, at least not directly,only a constructor can do it. It serves as a special member function used for initializing objects of that class.