//output?
#include<iostream>
using namespace std;

class Base {
public:
    void fun() {
        cout << "Base::fun() called";
    }

    void fun(int i) {
        cout << "Base::fun(int i) called";
    }
};

class Derived : public Base {
public:
    void fun() {
        cout << "Derived::fun() called";
    }
};

int main() {
    Derived d;
    d.fun(5);
    return 0;
}


/*
(D)ans:

Compiler Error.

Explanation:

If a derived class writes its own method, then all functions of base class with same name become hidden, even if signatures(name and parameter list) of base class functions are different. In the above question, when fun() is rewritten in Derived, it hides both fun() and fun(int) of base class.


Derived class overrides the fun() function without any parameters from the Base class.
When you create an object d of the Derived class and call d.fun(5), the compiler sees that the fun() function in the Derived class doesn’t take any arguments. However, you're attempting to call it with an argument 5.

Since there's no fun(int i) function specifically in the Derived class, the compiler looks for a match in the base class. There's a fun(int i) function in the Base class, but you're not directly calling it here.

Therefore, the output of this code won't display anything related to the function call d.fun(5). Instead, it will result in a compilation error because there's no suitable function found in the Derived class that matches the d.fun(5) call.

*/
