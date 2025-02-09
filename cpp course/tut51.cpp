#include<iostream>
using namespace std;
class complex{
    int real, imag;
    public:

        void getData(){
            cout<<"The real part is: "<<real<<endl;
            cout<<"The imag. part is: "<<imag<<endl;
        }
        void setData(int a,int b){
            real=a;
            imag=b;
        }
};
int main(){
    //pointers can also be used to store address of objects :
    // complex c1;
    // complex* ptr=&c1;
    //for pointer of float no.s, we need floating type pointer

    // or using new keyword:
    complex *ptr=new complex; //this will allocate a new memory to pointer ptr of complex type
    complex *p2=new complex;

    (*ptr).setData(7,6); //put bracket bcoz '.' operator has high precedence than '*' operator
    (*ptr).getData();// jab dereference opeartor use kroge tabhi membership operator ko use krna
    
    //we will make a pointer that will point to object 

    //ARROW POINTER- used to directly derefernce a pointer and run its function
    //arrow operator is a better syntax
    
    p2->setData(44,9); //means ptr jis object ko point kr rha ha uska setdata fxn run kro
    // *p2->setData(44,9); .....wrong syntax
    p2->getData();

    //making array of objects:
    complex *p1=new complex[3]; //will make an array of 3 new objects..we can  access these memory spaces by incrementing the values of pointers
    //p1 points 1st object of array
    p1->setData(100,4);
    p1->getData();
    /*
    u can also access like this:
    p[0].setData(9,7);
    p[0].getData();
    
    */

    //(p1+1) points 1st object of array
    (p1+1)->setData(200,16);
    (p1+1)->getData();

    note:
    *(p1+1)->setData(7,5); 
    //this gives error bcoz....*(p1 + 2), it attempts to dereference the pointer (p1 + 2) before calling setData. However, p1+2 represents the pointer to the third element of the array, and you don't need to dereference it to access the member function.instead you should use the -> operator to access the setData function on the third element:
    (p1+1)->setData(7,5);



    return 0;
}
//note:
Key Differences: Compilation and run/execution of program
Compilation relates to synatx errors and runtime realtes to logical errors

Compilation translates source code into machine-readable form, creating an executable or an intermediate representation, while program run executes the compiled program's instructions.

Compilation happens before program execution, ensuring syntax and some semantic correctness, whereas program run occurs when the user runs the compiled program, allowing it to perform its intended tasks.

Compilation checks for static issues in the code (syntax errors, type errors), while program run deals with dynamic issues that occur while the program is executing.Runtime errors, such as logic errors, input validation issues, memory allocation problems, or exceptions, might occur during program execution.

In summary, compilation prepares the program for execution by translating the code into machine-readable form, while program run executes the compiled code to perform specific tasks and operations.





