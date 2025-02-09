// note:Friend Function in C++
// Friend functions are those functions that have the right to access the private data members of class even though they are not defined inside the class. It is necessary to write the prototype(declaration of a function ) of the friend function. One main thing to note here is that if we have written the prototype for the friend function in the class it will not make that function a member of the class. 



#include<iostream>
using namespace std;
class complex{
    private:
        int a;
        int b;
    public:
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }


// Below line means that non member - sumComplex funtion is allowed to do anything with my private data/fxn (members)

    friend complex sumComplex(complex o1,complex o2);
    void printNumber(){
        cout<<"your number is: "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex sumComplex(complex o1,complex o2){
    complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    // now the sumComplex fxn can access the private data(a,b) of the class complex as it is declared as friend in class complex

    /* note:
    cout<<a; ---not defined ...access kro object ke through
    cout<<o1.a;  ----defined */
    return o3;
}

// ye ek foreign fxn ha...ye fxn koi chor bhi toh ho skta ha..islie until declared inside class as friend it can't access its private data..i.e. complier don't allows it to use them

int main(){
    complex c1,c2,c3;
    c1.setNumber(2,3);
    c2.setNumber(3,4);
    c1.printNumber();
    c2.printNumber();
    c3=sumComplex(c1,c2);
    c3.printNumber();
// any object of class cannot use the friend fxn as friend fxn is not a member of class
    // c2.sumComplex() ----error 

    
    return 0;
}

// note
/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. imp::  Usually contains the objects as arguments so that the private members of the objects can be called

5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

"." dot is called membership operator

*/
