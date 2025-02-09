/*
Static Data Members in C++
When a static data member is created, there is only a single copy of the data member which is shared between all the objects of the class. As we have discussed in our previous lecture that if the data members are not static then every object has an individual copy of the data member and it is not shared.
Every object maintains a copy of non-static data members. 
All objects share codes of all methods. 


Static Methods in C++ (done in tut21_ques)
When a static method is created, they become independent of any object and class. Static methods can only access static data members and static methods.
 "Static methods can only be accessed using the scope resolution operator."
  An example program is shown below to demonstrate static data members and static methods in C++.
*/
#include <iostream>                                              
using namespace std;
class employee
{
    int id;
    static int count; 
    // this variable will be shared by all the objects
    // count is static data member of class employee

    //. In C++, static variables of integral types like int are zero-initialized by default if no explicit initializer is provided. This means that if you do not explicitly initialize a static data member, it will be initialized to zero.
    
public:
    void setId()
    {
        cout << "\nEnter ID of employee: " << endl;
        cin >> id;
        count++;
    }
    void getId()
    {
        cout << "ID of this employee is : " << id << " and this employee number is " << count << endl;
    }
    // creating static fxn/method
    static void getCount(void){
        // count<<id;
        cout<<"The value of count is : "<<count<<endl;
    }
};
// int employee::count;
int employee::count;
// default value of count =0;
int main()
{
    employee Harry, rohan, Shyam;
    //harry.id=1; //this is private ,so can't be done
    Harry.setId();
    Harry.getId();
    employee::getCount();

    rohan.setId();
    rohan.getId();
    employee::getCount();

    Shyam.setId();
    Shyam.getId();
    employee::getCount();

    return 0;
}
//note:Static member functions can only directly access other static members or functions within the class. They do not have access to specific object instances' non-static members directly.
// static member functions in C++ are functions that belong to the class rather than to any specific object. They can be called using the class name followed by the scope resolution operator :: without needing an object of that class.

//But, static data members of a class can be accessed and modified by both static and non-static member functions of the class.