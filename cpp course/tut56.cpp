// A virtual function is a member function that is declared in the base class using the keyword virtual and is re-defined (Overridden) in the derived class.

/*
-Virtual functions are Dynamic in nature. 
-They are defined by inserting the keyword “virtual” inside a base class and are always declared with a base class and overridden in a child class .
-A virtual function is called during Runtime

*/
#include<iostream>
using namespace std;
class base{
    public:
        int var_base=8;
        virtual void display(){ //when we make 'display fxn of base class' virtual, it tells the compiler that if a pointer of base class type points to derived class object, then use the display fxn of the derived class only

        //The virtual keyword indicates that this function is meant to be overridden in derived classes,
            cout<<"1. Value of variable of base class: "<<var_base<<endl;
        }
};
class derived:public base{
    public:
        int var_der=5;
        void display(){
            cout<<"2. Value of variable of base class: "<<var_base<<endl;
            cout<<"2. Value of variable of derived class: "<<var_der<<endl;

        }
};
int main(){

    base*p1;
    base b;
    derived d;
    p1=&d;
    p1->display();
    //to call the display() fxn of base class ,u can do it exclusively:
    p1->base::display();
    return 0;
}
/*
notes:virtual fxns:
-Virtual functions are functions that can be overridden in derived class with the same signature.

-Virtual functions enable run-time polymorphism in a inheritance hierarchy.

-If a function is 'virtual' in the base class, the most-derived class's implementation of the function is called according to the actual type of the object referred to, regardless of the declared type of the pointer or reference. In non-virtual functions, the functions are called according to the type of reference or pointer.

*/