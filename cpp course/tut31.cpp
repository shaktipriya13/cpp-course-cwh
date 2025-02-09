// Constructor Overloading in C++
/*Constructor overloading is a concept in which one class can have multiple constructors with different parameters. The main thing to note here is that the constructors will run according to the arguments for example if a program consists of 3 constructors with 0, 1, and 2 arguments, so if we pass 1 argument to the constructor the compiler will automatically run the constructor which is taking 1 argument. */

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex()
    { // default constructor- accepts no args
        a = 0;
        b = 0;
    }

    // parameterized constructor
    complex(int val)
    {
        a = val;
        b = 0;
    }

    complex(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printData()
    {
        cout << "your number is: " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c3(7, 6);
    complex c1;
    complex c2(8);

    c1.printData();
    c2.printData();
    c3.printData();

    return 0;
}