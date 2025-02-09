#include<iostream>
using namespace std;
 
class Base
{
public:
    virtual void show() = 0;
};
 
class Derived: public Base
{
public:
    void show() { cout<<"In Derived n"; }
};
 
int main(void)
{
    Derived d;
    Base &br = d;
    br.show();
    return 0;
}


--->Compiler Error in line "Base &br = d;"
--->Empty Output
--->In Derived(ans)


