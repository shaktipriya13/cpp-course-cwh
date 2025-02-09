// passing objects as arguments of fxn in cpp
// we can create a static or normal method and pass objects in it as arguments
#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    // making variables public and accessing them from outside is not a good practice...try to make them private 
    public:
        void setData(int x,int y){
            a=x;
            b=y;
        }
        void setDataBySum(complex c1,complex c2){
            // c1 and c2 are objects of class complex passed in a fxn
            // complex refers user defined class dataype in which we have 2 integer variables
            // un variables ko we are just writing in form of complex nums...they are not actually complex nums
            a=c1.a+c2.a;
            b=c1.b+c2.b;
        }
        void printNumber(){
            cout<<"Complex number is: "<<a<<"+"<<b<<"i"<<endl;
        }

};
int main(){
    complex c1,c2,c3;  //declaring 3 objects of class datatype complex
    c1.setData(2,3);
    c1.printNumber();

    c2.setData(3,4);
    c2.printNumber();

    c3.setDataBySum(c1,c2);   //c3 ek object ha jiska a aur b fxn setdata by sum choose krega
    c3.printNumber();
    return 0;
}
note:
u can select code block in a program and run it in vscode