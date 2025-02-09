/*
 comprehensive list of the types of inheritance in C++:

Single Inheritance: A class is derived from only one base class.

Multiple Inheritance: A class is derived from more than one base class.

Multilevel Inheritance: A derived class is created from another derived class, forming a chain of inheritance.

Hierarchical Inheritance: Multiple derived classes inherit from a single base class.

Hybrid (Virtual) Inheritance: Used to address the "diamond problem" in multiple inheritance scenarios, where a class inherits virtually from multiple base classes to ensure there's only one copy of the common base class shared among the derived classes.This creates a diamond-shaped inheritance hierarchy, hence the name.
*/

//inheritance1
#include<iostream>
using namespace std;
//Base class
class employee{
    public:
        int id;
        float salary;
        employee(int empid){  //parameterized constructor
            id=empid;
            salary=34.00;
        }
        employee(){} //creating default constructor of employee
};

//Derived class syntax:
/*
    class{{derived class-name}} : {{visibility-mode}} {{base class name}}{

        class methods/functions etc...
    }
*/
/*Note:

Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited*/


//creating a Programmer class derived from base class 
class Programmer:private employee{
    // jab derived class banate ha toh automatically base class ka constructor is called
    public:
        //constructor
        Programmer(int empid){
            id=empid;
        }
        int languageCode=9;
        void getData(){      //this fxn will print the data
            cout<<id<<endl;   
        }
};

int main(){
    employee harry(8),sohan(7);
    cout<<harry.salary<<endl;
    cout<<sohan.salary<<endl;

    Programmer skillF(30);   //when this is called, the programmer skillF has since inherited from employee class , thus it tries to call the default constructor of the employee class
    cout<<skillF.languageCode<<endl;
    // cout<<skillF.id<<endl; //can't access id as id has been inherited as private variable
    skillF.getData();

    
    return 0;
}