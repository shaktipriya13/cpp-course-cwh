//output?

#include<iostream> 
using namespace std; 
//note:Base class is called superclass of Derived
class Base { 
private: 
	int i, j; 
public: 
	Base(int _i = 0, int _j = 0): i(_i), j(_j) { } 
}; 
class Derived: public Base { 
public: 
	void show(){ 
		cout<<" i = "<<i<<" j = "<<j; //private data is not inherited so it can't be printed
	} 
}; 
int main(void) { 
Derived d; 
d.show(); 
return 0; 
} 

// ans: (B) Compiler Error: i and j are private in Base
//note:
// Optional parameters, also known as default parameters

/*
EXPLANATION:
Base(int _i = 0, int _j = 0): i(_i), j(_j) { }

This is a constructor for the Base class. It takes two optional parameters of type int: _i and _j. These parameters have default values of 0, meaning if you create an object of the Base class without explicitly providing values for _i and _j, it will initialize i and j to 0.

The body of the constructor initializes the private member variables i and j using an initialization list:
i(_i), j(_j)

This means that when an object of the Base class is created using this constructor, the values passed as arguments (or the default values of 0 if no arguments are provided) will be assigned to the private members i and j.



*/
