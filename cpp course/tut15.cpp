// functions
// functions are a part of Top-down structured programming.
// Top-down structured programming is an approach where you break down a problem into smaller sub-problems or modules, solving them sequentially from the top level (main) down to the lower levels. In C++, you can implement this approach using functions to encapsulate different parts of the problem.
#include<iostream>
using namespace std;

int sum(int a,int b);   // Function prototype- it gives assurity (not guarantee) to compiler that u will meet the sum fxn aage

// int sum(int a,b);   -not acceptable...b ka dtatype lag se mention kro


// since a and b are not ur actual arguments, so even if u don't write a and b...it's acceptable
// int sum(int,int); ---acceptable

int main(){
// main is also a fxn
    int num1,num2;
    cout<<"Enter num1: "<<endl; 
    cin>>num1;
    cout<<"Enter num2: "<<endl; 
    cin>>num2;
    cout<<"sum of num1 and num2 is : "<<sum(num1,num2);

    // formal parameters- passed in fxn (a,b)
    // actual parameters- passed in fxn call (num1,num2)
    // their names can be same also.


    // c is called return value function key....in case of 'main' it is '0'.
    // "c" will replace 'sum(num1,num2)'
    return 0;
    
}


int sum(int a,int b){
    int c=a+b;
    return c;

    // Functions in C++ can have different return types (int, float, double, custom objects,(Custom objects refer to user-defined types, typically created through classes.) etc.), including void, which indicates that the function does not return any value:
    // code:
//     void displayMessage() {
//     std::cout << "Hello, World!" << std::endl;
//     }

}