//output?
#include <iostream> 
using namespace std; 
class Test 
{ 
private: 
    int x; 
public: 
    Test(int i) 
    { 
        x = i; 
        cout << "Called" << endl; 
    } 
}; 
  
int main() 
{ 
    Test t(20); 
    t = 30; // conversion constructor is called here. 
    return 0; 
} 

o/p:
//called
//called
/*
t = 30; attempts to assign 30 to t.
Since there's no direct assignment defined for int to Test, the compiler uses the conversion constructor Test(int i) to create a temporary object with x = 30.
Then, the default assignment operator is used to assign the temporary object's values to t.
*/

//If a class has a constructor which can be called with a single argument, then this constructor becomes conversion constructor because such a constructor allows automatic conversion to the class being constructed.

// A conversion constructor can be called anywhere when the type of single argument is assigned to the object. 