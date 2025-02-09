//topic aim: to explain that a base class pointr can be used to point derived class object
#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Base class variable is: "<<var_base<<endl;
        }

}; 

class DerivedClass:public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Base class variable is: "<<var_base<<endl;
            cout<<"Derived class variable is: "<<var_derived<<endl;
        }
};
int main(){

    //Pointers to derived class
    // In C++ we are provided with the functionality to point the pointer to derived class or base class

    BaseClass* base_class_pointer;
    DerivedClass obj_derived;  
    base_class_pointer=&obj_derived; //Pointing base class ka pointer to derived class->this is possible , but when you will call the display fxn , then the display fxn of the base class will be called..bcoz the pointer is of baseclass type-->this is called late binding--->is pointer ke through only baseclass ke methods can be used

    base_class_pointer->var_base=90;
    base_class_pointer->display();
    // base_class_pointer->var_derived=999; //gives error

    //making derived class pointer
    DerivedClass*p1=&obj_derived;
    p1->var_derived=45;
    p1->display();


    return 0;
}