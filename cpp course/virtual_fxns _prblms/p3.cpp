#include<iostream>
using namespace std;
class Base
{
public:
    virtual void show() = 0;
};
 
class Derived : public Base { };
 
int main(void)
{
    Derived q;
    return 0;
}

Compiler Error: there cannot be an empty derived class
Compiler Error: Derived is abstract------------->correct
No compiler Error

reason:
If we don't override the pure virtual function in derived class, then derived class also becomes abstract class.