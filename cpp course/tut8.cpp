#include<iostream>
#include<iomanip> //<iomanip> is a header file in C++ that provides facilities to perform formatted input and output operations. It stands for "Input/Output Manipulation."
using namespace std;
int main(){
    int a=9;
    a=8;
    // changing value of variable
    char b='h';
    b='5';
    // to make value of a variable static, use 'const' keyword. this will not allow to change value of variable in future
    const int d=8;
    // d has become read-only variable
    // log glti se variable value ko change kr dete ha program me...usse bachne ke liye we use 'const'
    // d=9; 
    // this is now not possible
    const float u=9.76;
    cout<<int(u);
    


    // MANIPULATORS
    int x=7;
    int y=12;
    int z=6728;
    cout<<"\nvalue of x: "<<setw(4)<<x<<endl; //sets width
    cout<<"value of y: "<<setw(4)<<y<<endl;
    cout<<"value of z: "<<setw(4)<<z<<endl;
    // operator precedence 
    int n=9;
    int m=6;
    int s=n*5+m-4+78;
    cout<<s;


}