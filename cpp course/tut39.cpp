// Protected Access Modifiers in C++

#include<iostream>
using namespace std;  //protected data is different from private only because they can be inherited by other class...but they also can't be accessed from outside
//a class can also be derived in protected mode
class Base{
    protected:
        int a; //will get derived
    private:
        int b; //will not get derived
};
class Derived: public Base{
    
};

/*
        Public derivation    Private Derivation  Protected derivation

Private   Not inherited         Not inherited       Not inherited
members

Public      Public              Private                Protected  
members

Potected    Protected           Private                 Protected
members


note: public ke case member jaisa derivation hoga aur baki me derivation ke according hoga....but private derivation me always not inherited hoga 
*/

//protected data can only be accssed by the member fxns of (that class and class in which it is inherited)
int main(){
    Base p;
    Derived d;
    cout<<d.a; //can't be accessed bcoz a is protected in both base and derived class //object cannot directly access the protected variables
    
    return 0;
}