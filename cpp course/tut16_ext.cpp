// This code snippet demonstrates the usage of a function that returns a reference to an integer variable to perform a swapping operation.
#include<iostream>
using namespace std;
int &swapReferenceVar(int &a,int &b){

    // return type of this fxn is a reference variable 
    int temp=a;
    a=b;
    b=temp;
    return a;
    // return &a; .......will return address of a
}
int main(){
    int x=9,y=6;
    cout<<"x= "<<x<<endl<7<"y= "<<y<<endl;
    swapReferenceVar(x,y) = 766;

    // swapReferenceVar(x,y) will be replaced by a(which is reference to x) and thus x will be changed.

    // This statement swaps x and y values and assigns 766 to x.
    // x becomes 766 (as the function returns a reference to x after the swap).

    cout<<"x= "<<x<<endl<<"y= "<<y<<endl;


    // concept : Returning a reference variable in C++

    // Returning a reference variable in C++ means that a function returns a reference to a variable. This allows the function to provide direct access to the original variable or object without creating a copy. It's a powerful mechanism that enables you to modify the original variable or object through the reference returned by the function.
    
    return 0;
}