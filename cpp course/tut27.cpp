// how to give permission to fxn of one class to use private data of another class ?



/*Friend Classes in C++
Friend classes are those classes that have permission to access private members of the class in which they are declared. The main thing to note here is that if the class is made friend of another class then it can access all the private members of that class. */

// if u need to make many fxns of other classes as friend of some class, u can make fiend class


#include <iostream>
using namespace std;
// Forward declaration
class Complex; //this declaration guarantees the compiler that the class complex is present in further code
class Calculator{
    public:
        int add(int a,int b){
                return a+b;
        }

    
        int sumRealComplex(Complex o1,Complex o2);  
        //only fxn defn bcoz it uses Complex class ka variables which has not been defined yet
        int sumCompComplex(Complex o1,Complex o2);

    
        
};
class Complex
    {
    private:
        int a,b;
        //INDIVIDUALLY declaring fxns as friends...isse aap chaho toh calculator ke kuch hi fxns ko permission de skte ho
        
        /*friend int Calculator:: sumRealComplex(Complex o1,Complex o2);
        friend int Calculator:: sumCompComplex(Complex o1,Complex o2); */


       // ALITER: Declaring the entire claculator class as friend
        friend class Calculator;
        
 


    public:
        void setNumber(int n1, int n2)
        {
            a = n1;
            b = n2;
        }

        void printNumber()
        {
            cout << "your number is: " << a << "+" << b << "i" << endl;
        }
    };
int Calculator:: sumRealComplex(Complex o1,Complex o2){
        return (o1.a+o2.a);
    }
int Calculator:: sumCompComplex(Complex o1,Complex o2){
    return (o1.b+o2.b);
}
int main()
{
    Complex o1,o2;
    o1.setNumber(2,3);
    o2.setNumber(5,6);
    Calculator calc;
    int real=calc.sumRealComplex(o1,o2);
    int img=calc.sumCompComplex(o1,o2);
    cout<<"The sum result of real part  of o1 and o2 is :"<<real<<endl;
    cout<<"The sum result of imaginary part  of o1 and o2 is :"<<img<<endl;
    return 0;
}