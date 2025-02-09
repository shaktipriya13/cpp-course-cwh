// Parameterized constructor -takes default argument values in constructor
#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        complex(int,int);  //constructor declaration..u can even define constructor here 
        //difference b/w fxn & constructor is that fxn has a return type
        void printData()
        {
            cout << "your number is: " << a << " + " << b << "i" << endl;
        }
        
};
complex::complex(int x,int y){    //---this is called parameterized constructor..takes 2 arguments
    a=x; 
    b=y;
   
}
int main(){
    //Implicit call
    complex o1(3,4);
    o1.printData();

    //explicit call
    complex b=complex(5,7);
    b.printData();
    //just like:
    int n=int(9.8);
    cout<<n;
    
    return 0;
}