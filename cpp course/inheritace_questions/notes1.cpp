
// initializer list in oops cpp inheritance?

/*
In C++, initializer lists are used to initialize base class constructors in the derived class. When dealing with inheritance, especially constructors, the initializer list plays a crucial role in passing arguments to the constructors of base classes.

*/
class Base {
private:
    int baseValue;
public:
    Base(int value) : baseValue(value) {
        // Constructor body
    }
};

class Derived : public Base {
private:
    int derivedValue;
public:
    Derived(int baseVal, int derivedVal) : Base(baseVal), derivedValue(derivedVal) {
        // Constructor body
    }
};



// This use of initializer lists ensures that the base class is appropriately initialized before the derived class-specific initialization takes place. It helps maintain the order of constructor execution in the inheritance hierarchy.

//Initializer lists are crucial in scenarios where the base class constructor requires certain arguments or initialization before the derived class constructor can perform its tasks. 

//They enable passing arguments to base class constructors in a clean and efficient manner during object creation

-----------------------------------------------------------------------
2.In C++, if we do not write our own, then compiler automatically creates a default constructor, a copy constructor and a assignment operator for every class.
-----------------------------------------------------------------

