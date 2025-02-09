// Destructor in C++
// A destructor is a type of function which is called when the object is destroyed. 

// Destructor never takes an argument nor does it return any value.It is implicitly runned by the compiler.when an program exits, then to clean the storage, the compiler automatically calls it

// destructors are useful when programs are complex, then we wish that when an object is destroyed , then it also frees the memory space...this is acheived by use of destructors

#include<iostream>
using namespace std;
int count=0;  //global variable
class num{
    public:
        num(){ //constructor
            count++;
            cout<<"This is the time when the constructor is called for the object number "<<count<<endl;
        }

        // /to declare, destructor use class name with tilt:
        ~num(){
            cout<<"This is the time when the destructor is called for object number "<<count<<endl;
            count--;
        }

};
int main(){
    //destructor of n1 is called when the object n1 goes out of scope at the end of main()
    cout<<"We are inside our main function."<<endl;
    cout<<"Creating 1st object n1 "<<endl;
    num n1;
    //creating a block...the variables declared inside a block has its scope within that block only
    {
        cout<<"Entering this block";
        cout<<"Creating 2 more objects"<<endl;
        num n2,n3; //n2 and n3 will get destroyed as we exit out of it
        //compiler jo pta chalta ha ki banaye hue variables ki use aage nhi padega toh usi wakt, wo un variables ko destroy kr deta ha
        cout<<"Exiting this block"<<endl;
    }//destructors are automatically called by the compiler
    cout<<"Back to main"<<endl;


    //through destructors we can even free the allocated dynamic memories
    //destructors are used in stack,queue, heap etc also
    //they can also be declared in private section
    return 0;
}

//notes:
// CONSTRUCTOR: There can be multiple constructors of a single class, and this concept is known as constructor overloading.

// DESTRUCTOR: There is always only a single destructor for one class.