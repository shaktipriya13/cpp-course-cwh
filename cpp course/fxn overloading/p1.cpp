//output?
#include<iostream> 
using namespace std; 

class Test 
{ 
protected: 
	int x; 
public: 
	Test (int i):x(i) { } 
	void fun() const { cout << "fun() const " << endl; } 
	void fun()	 { cout << "fun() " << endl;	 } 
}; 

int main() 
{ 
	Test t1 (10); 
	const Test t2 (20); 
	t1.fun(); 
	t2.fun(); 
	return 0; 
} 

ans:
fun()
fun() const
//reason: t1.fun() calls the non-const fun() function because t1 is not marked as const.
t2.fun() calls the fun() function marked as const because t2 is a const object.

reason:


