// “this” is a keyword that is an implicit pointer. “this” pointer points to the object which calls the member function. 
#include<iostream>
using namespace std;
class A{
    int a;
    public:
        /*void setData(int a){
            // a=a;
             //here priority will be given to local variable 'a' only,and not the class variable 'a' ..so on running this, we get garbage value in a printed
            //to avoid this,we use 'this' pointer- a special keyword in cpp
            this->a=a;
            //'this' keyword points to the member fxn
        }   */
        //to return object using 'this' pointr,write:
        A& setData(int a){  //A & signifies that the function returns a reference to an object of class A.. This allows method chaining, as the function returns a reference to the current object after modifying its state.
            this->a=a;
            return*this;//return *this; returns a reference to the current object. This allows method chaining, where you can call member functions on the same object successively.

        }//The class has a member function setData which sets the value of a and returns a reference to the current object of type A
        void getData(){
            cout<<"The value in a is: "<<a<<endl;
        }
};
int main(){
    A a;
    a.setData(8);
    a.getData();
    a.setData(9).getData();
    
    return 0;
}
    //this is a keyword which is a pointerwhch points to the object which invokes the member fxn
    //this keyword is also used for returning object for which the member fxn is running
    // this pointer will point to that object for which the member fxn is being called