#include<iostream>
using namespace std;

int main(){

    int a=8;
    int* b=&a;
    // or
    int y=9;
    int* h;
    h=&y; 
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The value stored at address b is "<<*b<<endl;
    return 0;
}