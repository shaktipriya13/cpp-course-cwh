// CALL BY REFERENCE USING C++ REFERENCE VARIABLES
    // note:
    // Reference variables in C++ provide an alias, or an alternative name, to an existing variable. They allow you to work with the original variable using a different name. Once a reference is initialized, it acts as an alias for the variable it references and can be used interchangeably with that variable.eg:
    // int a=9;
    // int &b=a;
    // "now b and a points to same memory location where 9 is present"

#include<iostream>
using namespace std;
    void swapReferenceVar(int &a,int &b){
        // here values of x and y are not copied..rather &x and &y are passed in fxn
        // a and b are reference variables...and they will now point towards memory of x and y

        // inside fxn &a=x, &b=y

        // After the swap function call, x becomes a reference to a, and y becomes a reference to b.
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=9,y=8;

    cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
    
    swapReferenceVar(x,y);
    // just pass x and y 
    cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
    
    return 0;
}