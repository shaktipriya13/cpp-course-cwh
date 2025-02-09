/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using? //multiple inheritance
    Q2. Which mode of Inheritance are you using? //Public inheritance
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
#include<iostream>
#include<math.h>
using namespace std;
class SimpleCalculator{
    protected:
        int n1,n2;
    public:
        void takeval(){
            cout<<"Enter the first value: "<<endl;
            cin>>n1;
            cout<<"Enter the second value: "<<endl;
            cin>>n2;
        }
        int sum(){
            return n1+n2;
        }
        int diff(){
            return n1-n2;
        }
        int mul(){
            return n1*n2;
        }
        int div(){
            return n1/n2;
        }
        void show1(){
            cout<<"sum of "<<n1<<"and "<<n2<<"is = "<<sum()<<endl;
            cout<<"difference of "<<n1<<"and "<<n2<<"is = "<<diff()<<endl;
            cout<<"product of "<<n1<<"and "<<n2<<"is = "<<mul()<<endl;
            cout<<"quotient of "<<n1<<"and "<<n2<<"is = "<<div()<<endl;

        }
        SimpleCalculator(int l,int m):n1(l),n2(m){};
};
class ScientificCalculator{
    protected:
         int n1,n2;
    public:
        int power(){
            return pow(n1,n2);
        }
        int fac(int n){
            if(n==0||n==1){
                return 1;
            }
            return n*fac(n-1);
        }
        float sinOp(int n){
            return sin(n);
        }
        float cosOp(int n){
            return cos(n);
        }
        void show2(){
            cout<<"value of "<<n1<<"raise to power "<<n2<<"is: "<<power()<<endl;
            cout<<"Factorial value of "<<n1<<"is : "<<fac(n1)<<endl;
            cout<<"Factorial value of "<<n2<<"is : "<<fac(n2)<<endl;
            cout<<"sine value of "<<n1<<"is : "<<sinOp(n1)<<endl;
            cout<<"sine value of "<<n2<<"is : "<<sinOp(n2)<<endl;
            cout<<"cosine value of "<<n1<<"is : "<<cosOp(n1)<<endl;
            cout<<"cosine value of "<<n2<<"is : "<<cosOp(n2)<<endl;
        }
        ScientificCalculator(int l,int m):n1(l),n2(m){};

};
class HybridCalculator: virtual public SimpleCalculator,virtual public ScientificCalculator{
    public:
        HybridCalculator(int a,int b):SimpleCalculator(a,b),ScientificCalculator(a,b){};
        

};
int main(){
    HybridCalculator h(30,45);
    h.show1();
    h.show2();
    
    return 0;
}
//harry's code:simple and decent
#include<iostream>
#include<cmath>
using namespace std;
class SimpleCalculator{
    int a,b;
    public:
        void getdata1(){
            cout<<"Enter num1: ";
            cin>>a;
            cout<<"Enter num1: ";
            cin>>b;
        }
        void show1(){
            cout<<"sum= "<<a+b<<endl;
            cout<<"difference= "<<a-b<<endl;
            cout<<"product= "<<a*b<<endl;
            cout<<"quotient= "<<a/b<<" "<<"remainder= "<<a%b<<endl;
        }
};
class ScientificCalculator{
    int a,b;
    public:
        void getdata2(){
            cout<<"Enter num1: ";
            cin>>a;
            cout<<"Enter num1: ";
            cin>>b;
        }
        void show2(){
            cout<<"tan(A) ki value is = "<<tan(a)<<endl;
            cout<<"cos(A) ki value is = "<<cos(a)<<endl;
            cout<<"exp(A) ki value is = "<<exp(a)<<endl;
            
        }
};
class HybridCalculator:public SimpleCalculator,public ScientificCalculator{

};
int main(){
    HybridCalculator calc;
    calc.getdata1();
    calc.show1();
    calc.getdata2();
    calc.show2();

    
    return 0;
}