// Function overloading in C++ allows you to define multiple functions with the same name but with different parameters or parameter types within the same scope. This feature enables you to use the same function name to perform different operations based on the parameters passed to the function.


#include<iostream>
using namespace std;
void sum(int a,int b){
    cout<<"using fxn with 2 arguments."<<endl;
    cout<<"sum ="<< a+b<<endl;
}
void sum(int a,int b,int c){
    
    cout<<"using fxn with 3 arguments."<<endl;
    cout<<"sum ="<< a+b+c<<endl;
}

int vol(int l,int b,int h){
    return (l*b*h);
}
int vol(int a){
    return (a*a*a);
}
int vol(int r,int h){
    return (3.14*r*r*h);
}
int main(){
    int a=9,b=5,c=3;
    sum(a,b);
    sum(a,b,c);
    

    cout<<"vol of circle ,a=7: "<<vol(7)<<endl;
    cout<<"vol of cylinder ,r=5,h=10: "<<vol(5,10)<<endl;
    cout<<"vol of circle ,l=8,b=4,h=2: "<<vol(8,4,2)<<endl;
    return 0;
}