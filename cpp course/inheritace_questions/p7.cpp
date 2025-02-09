// o/p?
#include<iostream> 
using namespace std; 

class Base { 
public: 
	void fun()		 { cout << "Base::fun() called";	 } 
	void fun(int i)	 { cout << "Base::fun(int i) called"; } 
}; 

class Derived: public Base { 
public: 
	void fun() {	 cout << "Derived::fun() called"; } 
}; 

int main() { 
	Derived d;
	// d.fun(4);    -- will give error
	d.Base::fun(5); 
	return 0; 
}

/*
(A) Compiler Error
(B) Base::fun(int i) called


Answer: (B)

Explanation: We can access base class functions using scope resolution operator even if they are made hidden by a derived class function.
*/