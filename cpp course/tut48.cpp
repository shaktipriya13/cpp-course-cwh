#include<iostream>
using namespace std;
/*
Case 1:
class B : public A{ 
    //here constructor of A will be called first,then B()- order of execution
}

Case2:
class A: public B,public C{
    1st B() is called,then C(), and then A() bcoz B comes before C
}

Case 3:
class A: public B,virtual public C{
    1st C() is called,then B(), and then A()
}
-->constructor of base classes are called before that of derived classes
-->Virtual are vip classes...they are given more preference

*/
class Base1{
    int data1;
    public:
        Base1(int i){
            data1=i;
            cout<<"Base1 class constructor called!"<<endl;
        }
        void printData1(){
            cout<<"The value of data1 is: "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2=i;
            cout<<"Base2 class constructor called!"<<endl;
        }
        void printData2(){
            cout<<"The value of data2 is: "<<data2<<endl;
        }
};
class Derived: public Base1, public Base2{          //declaration statement
    private:
        int derived1,derived2;
    public:
        Derived(int a,int b,int c,int d):Base2(b),Base1(a){ //initializing the values at one go   //declaration statement me jiska base is written 1st, usika constructor is called first
            derived1 = a;
            derived2 = b;
            cout<<"Derived constructor called!"<<endl;
        }
        void printData(){
            cout<<"The value of derived1 is: "<<derived1<<endl;
            cout<<"The value of derived2 is: "<<derived2<<endl;
        }
};
int main(){;
    Derived harry(6,7,8,9);
    harry.printData1();
    harry.printData2();
    harry.printData();
}