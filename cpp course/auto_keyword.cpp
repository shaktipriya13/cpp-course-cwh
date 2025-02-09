//to storea variable, we need to know its type of the expression
/*
but sometimes, it may be difficult to determine its type....in such cases we can let the compiler figure out the type for us by using the auto type specifier...this feature is since C++ 11.

some type val1 , val2;
auto sum= val1+ val2;
The compiler will deduce the type of sum from the type returned by applying '+' to val1 and val2

->if val1 and val2 are int type, then sum is also int type
->if val1 and val2 are float/double type, then sum is also float/double type


*/

#include<iostream>
#include<typeinfo>
using namespace std;

int main(){

    int a=8,b=9;
    auto sum=a+b;
    cout<<typeid(sum).name()<<endl;

    double c=1.7,d=8.5;
    auto sum2= c+d;
    cout<<typeid(sum2).name()<<endl;

    //Note that the typeid operator returns a type_info object, and name() is used to obtain a human-readable representation of the type.

    // -------------------------------------------------------------------------
    /*note:
    As a declaration can involve a single base type, the initializers for all the variables in the declaration must hv types that are consistent with each other

    eg:
    auto i=9, *p=&i; ---> okay as i is int and p is pointer to int i
    auto s=6, pi=3.14;  ---->will give error, as types for both pi and s are  
    
                 diferent and at a time , auto will allocate only one datatype
    
    

    */
    return 0;
}