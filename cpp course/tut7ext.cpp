#include<iostream>
using namespace std;
int main(){
    //float,double and long double  Literals 
    float a=34.4f;
    long double b=34.4l;
    float d=34.4;
    long double e=34.4;
    cout<<"size of 34.4 is "<<sizeof(34.4)<<endl; //34.4 is double by default
    cout<<"size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"size of a is "<<sizeof(a)<<endl;
    cout<<"size of b is "<<sizeof(b)<<endl;
    cout<<"size of d is "<<sizeof(d)<<endl;
    cout<<"size of e is "<<sizeof(e)<<endl;


    // REFERENCE VARIABLES
    float x=9.5;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;

    // agar y ko bhi change kroge toh x will also change as y points to x
    
    // type casting
    // rules
//     Implicit conversions are automatically handled by the compiler when no data loss occurs (e.g., int to double).
// Explicit conversions (using casting operators) might lead to data loss or undefined behavior, so they need to be used carefully.
// Casting pointers between unrelated types might result in unexpected behavior or crashes.
// Casting between integer and floating-point types may lead to loss of precision.
    int p=45;
    float q=45.68;
    //u can use 2 ways to write type-casting
    cout<<"The value of q is "<<int(q)<<endl;
    cout<<"The value of q is "<<(int)q<<endl;

    cout<<sizeof(p)<<endl; //sizeof gives size of datatype 'int'
    cout<<"The value of p is "<<float(p)<<endl;
    cout<<"The value of p is "<<(double)p<<endl<<sizeof(double(p));


}