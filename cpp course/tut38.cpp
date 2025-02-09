//SINGLE INHERITANCE: deep dive

#include<iostream>
using namespace std;
class Base{
    int data1;   //private by default and is not inheritable

    //in general,we try to make variables private so that nobody can update their values from outside
    public:
        int data2;

        //public methods:
        void setData();
        int getData1();
        int getData2();
};
//defining fxns of class Base

void Base::setData(){
    data1=10;
    data2=20;
}
int Base::getData1(){
    return data1;
}
int Base::getData2(){
    return data2;
}

class Derived: public Base{   //class is derived publically
    int data3;
    public:
        void process();
        void display();
};
//defining fxns of class Derived

void Derived::process(){
    data3 = data2*getData1();
    //data1 can't be accessed directly bcoz it is private data of class Base
}
void Derived::display(){
    cout<<"value of data 1 is: "<<getData1()<<endl; //getData1 is a fx that is inherited from Base class to Derived class

    cout<<"value of data 2 is: "<<data2<<endl;
    cout<<"value of data 3 is: "<<data3<<endl;
    //data 3 can be accessed (although private) bcoz here it is called by the fxn of Derived class
}

int main(){
    Derived der;
    der.setData(); //sets vaue of data1 and data2 of object der to 10 and 20 resp.
    der.process();
    der.display();

    //we can directly change data of data2 but not that of data1 bcoz:
    //  as its an private member of base class so we can't change its value directly,but we can make a public member in base class which changes it's value and can use this member by inheritance in another class

    der.data2=8;  
    cout<<der.data2;
    
    return 0;
}