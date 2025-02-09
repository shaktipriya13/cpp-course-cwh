//output?
#include <iostream>
using namespace std;
  
int i;
  
class A
{
public:
    ~A()
    {
        i=10;
    }
};
  
int foo()
{
    i=3;
    A ob; //ob ka scope was limited till foo fxn only ...when it is destoyed after coming out f fxn ,then destructor of A is called
    return i;
}
  
int main()
{
    cout << foo() << endl;
    return 0;
}

//ans: 3
//Explanation: 
While returning from a function, destructor is the last method to be executed. The destructor for the object “ob” is called after the value of i is copied to the return value of the function. So, before destructor could change the value of i to 10, the current value of i gets copied & hence the output is i = 3.