//output?
#include <iostream> 
using namespace std; 

class Base1 { 
public: 
	~Base1() { cout << " Base1's destructor" << endl; } 
}; 
	
class Base2 { 
public: 
	~Base2() { cout << " Base2's destructor" << endl; } 
}; 
	
class Derived: public Base1, public Base2 { 
public: 
	~Derived() { cout << " Derived's destructor" << endl; } 
}; 
	
int main() 
{ 
Derived d; 
return 0; 
} 


//ans:
/*Derived's destructor
Base2's destructor
Base1's destructor
/*
Explanation: Destructors are always called in reverse order of constructors.
*/
