//o/p?
#include<iostream> 
using namespace std; 

class Base 
{ 
public : 
	int x, y; 
public: 
	Base(int i, int j){ x = i; y = j; } 
}; 

class Derived : public Base 
{ 
public: 
	Derived(int i, int j):x(i), y(j) {} //wrong syntax
    
	void print() {cout << x <<" "<< y; } 
}; 

int main(void) 
{ 
	Derived q(10, 10); 
	q.print(); 
	return 0; 
} 
/*
(A) 10 10
(B) Compiler Error
(C) 0 0


Answer: (B)

Explanation: The base class members cannot be directly assigned using initializer list. We should call the base class constructor in order to initialize base class members.

Following is error free program and prints “10 10”
*/

#include<iostream> 
using namespace std; 

class Base 
{ 
public : 
	int x, y; 
public: 
	Base(int i, int j){ x = i; y = j; } 
}; 

class Derived : public Base 
{ 
public: 
	Derived(int i, int j): Base(i, j) {} 
	void print() {cout << x <<" "<< y; } 
}; 

int main(void) 
{ 
	Derived q(10, 10); 
	q.print(); 
	return 0; 
} 

