
// fxn overload prblm example
#include<iostream>
using namespace std;
void sum(int a,int b){
    cout<<"using fxn with 2 arguments."<<endl;
    cout<<"sum ="<< a+b<<endl;
}
void sum(int a,int b,int c=9){
    
    cout<<"using fxn with 3 arguments."<<endl;
    cout<<"sum ="<< a+b+c<<endl;
}
int main(){
    sum(1,2);
    //  In C++, when you have multiple overloaded functions (functions with the same name but different parameter lists), the compiler decides which function to call based on the arguments passed during the function call.
    
    //here, the compiler is unable to determine which overloaded function to call because there are two viable candidates: sum(int, int) and sum(int, int, int). This ambiguity causes a compilation error.
    return 0;
}
