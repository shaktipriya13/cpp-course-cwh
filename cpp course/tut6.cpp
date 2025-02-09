//arithmetic operators
#include<iostream>
using namespace std;
int main(){
    int a=4,b=5;
    cout<<"value of a+b is  "<<a+b<<endl;
    cout<<"value of a-b is  "<<a-b<<endl;
    cout<<"value of a*b is  "<<a*b<<endl;
    cout<<"value of a/b is  "<<a/b<<endl;
// important
    // The variables a and b are both integers. Even though a is initialized with a floating-point value (4.6), it will store 4 only.it's being stored as an integer because of its type (int). When you perform a / b, both a and b are integers, so the result will also be an integer

    cout<<"value of a%b is  "<<a%b<<endl;
    cout<<"value of a++ is  "<<a++<<endl;
    cout<<"value of ++a is  "<<++a<<endl;
    cout<<"value of a-- is  "<<a--<<endl;
    cout<<"value of --a is  "<<--a<<endl;
    cout<<endl<<endl;


    // Comparison operators
    cout<<"value of a==b is "<<(a==b)<<endl;
    // brackets() are imp to put in comparison operators in cpp as rule
    cout<<"value of a>=b is "<<(a>=b)<<endl;
    cout<<"value of a<=b is "<<(a<=b)<<endl;
    cout<<"value of a>b is "<<(a>b)<<endl;
    cout<<"value of a<b is "<<(a<b)<<endl;
    cout<<"value of a!=b is "<<(a!=b)<<endl<<endl;

    // logical operators

    cout<<"value of logical and operator (a==b && a<=b) is "<<((a==b) && (a<=b))<<endl;
    cout<<"value of logical or operator (a==b || a<=b) is "<<((a==b) || (a<=b))<<endl;
    cout<<"value of logical not operator (a==b) is "<<(!(a==b))<<endl;

}