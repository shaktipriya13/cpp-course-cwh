//output?
#include<iostream> 

using namespace std; 
class Base1 { 
public: 
	Base1() 
	{ cout << " Base1's constructor called" << endl; } 
}; 

class Base2 { 
public: 
	Base2() 
	{ cout << "Base2's constructor called" << endl; } 
}; 

class Derived: public Base1, public Base2 { 
public: 
	Derived() 
	{ cout << "Derived's constructor called" << endl; } 
}; 

int main() 
{ 
Derived d; 
return 0; 
} 

//ans:
/*(B) Base1′s constructor called
Base2′s constructor called
Derived’s constructor called

Explanation: When a class inherits from multiple classes, constructors of base classes are called in the same order as they are specified in inheritance.
*/
