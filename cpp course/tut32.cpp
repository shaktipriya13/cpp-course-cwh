// Constructors with Default Arguments in C++

// A constructor that doesn't take any arguments. It is invoked when an object is created without any arguments. If no constructor is defined explicitly, the compiler provides a default constructor.


#include<iostream>
using namespace std;
class simple{
    int data1,data2,data3;
    public:
    simple(int a,int b=9,int c=90){   //defaults args are after the non default args
        data1=a;
        data2=b;
        data3=c;
    }
    
    void printNum();
};

// The number of arguments you can pass to a function in C++ is technically unlimited, but it's often limited by practical considerations like system memory and the practical usability of the code.
void simple::printNum(){
    cout<<"value of data is: "
    <<data1<<" and "
    <<data2<<" and "
    <<data3<<endl;
}
int main(){
    simple o1(8);
    o1.printNum();

    

    simple s2=simple(7,6,5);
    s2.printNum();
    
    simple s3=simple(1,2);
    s3.printNum();
    

    return 0;
}