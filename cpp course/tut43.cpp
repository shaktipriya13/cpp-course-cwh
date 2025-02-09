/*
Ambiguity Resolution in Inheritance:

Ambiguity in inheritance can be defined as when one class is derived for two or more base classes then there are chances that the base classes have functions with the same name. So it will confuse derived class to choose from similar name functions. To solve this ambiguity scope resolution operator is used “::”.
*/


//always keep the names of your variables and classes meaningful so that it is readable for others

#include<iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout<<"How are you ?"<<endl;
        }
};
class Base2{
    public:
        void greet(){
            cout<<"Kaise ho ?"<<endl;
        }
};
class Derived: public Base1,public Base2{
    public:
        void greet(){
            Base1 :: greet();
            //will tell the compiler to run the greet fxn of base1 if Derived object ka greet is called
        }
};

//making classes for Ambiguity-2:
/*note:
agar base class aur derived class dono me fxns same name ka ha toh although base class ka fxn is inherited in derived class....but the compiler will run the original fxn of the derived class and not the inherited one*/

class B{
    public:
        void say(){
            cout<<"Hello World!"<<endl;
        }
};
class D: public B{
    public:

    //D's new say method will override B's say method
        void say(){
            cout<<"Hello my ppl!"<<endl;
        }
};


int main(){
    // Ambiguity type- 1: This is type of ambiguity is resolved by the programmer

    // Base1 o1;
    // o1.greet();
    // Base2 o2;
    // o2.greet();

    // Derived d;
    // d.greet();
//-------------------------------------------------------------------

    //Ambiguity type-2: This is type of ambiguity is resolved by the compiler itself

    B b1;
    b1.say();
    D d1;
    d1.say();
    
/*The main thing to note here is that both “B” and “D” classes have the same function “say”, So if the class “D” will call the function “say” it will override the base class “say” method because compiler by default run the method which is already written in its own body. But if the function “say” was not present in the class “D” then the compiler will run the method of the class “B”.*/
    
    return 0;
}

//notes:
// Overriding : When a method in a subclass has the same name and type signatures as a method in the superclass, then the method in the subclass overrides the method in the superclass.


// Overloading : It allows different methods to have same name, but different signatures where signature can differ by number of input parameters or type of input parameters or both. Overloading is related to compile time (or static) polymorphism..