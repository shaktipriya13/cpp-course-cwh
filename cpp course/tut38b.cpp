//importing same class but as private
#include<iostream>
using namespace std;
class Base{
    int data1;   //private by default and is not inheritable
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

class Derived: private Base{   //class is derived privately
    int data3;
    public:
        void process();
        void display();
};
//defining fxns of class Derived

void Derived::process(){
    //calling setData fxn here,as now it can't be directly called since it is now private fxn of Derived
    setData();

    data3 = data2*getData1();
    //data1 can't be accessed directly bcoz it is private data of class Derived
}
void Derived::display(){
    cout<<"value of data 1 is: "<<getData1()<<endl; //getData1 is a fx that is inherited from Base class to Derived class

    cout<<"value of data 2 is: "<<data2<<endl;
    cout<<"value of data 3 is: "<<data3<<endl;
    //data 3 can be accessed (although private) bcoz here it is called by the fxn of Derived class
}

int main(){
    Derived der;
    // der.setData(); //sets vaue of data1 and data2 of object der to 10 and 20 resp.
    der.process();
    der.display();

    
    return 0;
}