// output?
#include <iostream>
using namespace std;

class X 
{
public:
	int x;
};

int main()
{
	X a = {10};
	X b = a;
	cout << a.x << " " << b.x;
	return 0;
}
/*
(C)10 10 -ans

The following may look like an error, but it works fine. X a = {10}; Like structures, class objects can be initialized. The line “X b = a;” calls copy constructor and is same as “X b(a);”. Please note that, if we don’t write our own copy constructor, then compiler creates a default copy constructor which assigns data members one object to other object.

*/

------------------------------------------------------------------------------
Q2.(13th ques of list)
We must use initializer list in a constructor when
(A) There is a reference variable in class
(B) There is a constant variable in class
(C) There is an object of another class. And the other class doesn’t have default constructor.
(D) All of the above


Answer: (D)