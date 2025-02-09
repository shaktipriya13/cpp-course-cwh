/*Copy Constructor in C++
A copy constructor is a type of constructor that creates a copy of another object. If we want one object to resemble another object we can use a copy constructor. 

imp:: If no copy constructor is written in the program ,compiler will supply its own copy constructor. */


#include<iostream>
using namespace std;
class number{
    int a;
    public:
        number(){}
           //default constructor is important to make if you are creating object without passing any argument nd at the same time creating an constructorwith an argument
           
        number(int num){
            a=num;
        }
        //ya toh dono me se koi constructor mat banao,ya fir default constructor bhi banao, ya fir agar only parameterized const. bna rhi toh object ke sath hi uska value assign krdo



        //copy constructor:
        number(number & obj){   //passing reference to its own object
            cout<<"Copy constructor called !!!"<<endl; //not imp to write
            a=obj.a;
        }
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};
int main(){
    number x,y,z(9);
    number w(8);
    x.display();
    y.display();
    z.display();

    //creating an object z1 that should exactly resemble x,y or z
    number z1(x); //z1 me jo value pass ki (here,x ) wo z1 me pass ho gyi...yaha z1 ke a me x ki a ki value pass hogi
    z1.display();

    number z2(z);  //copy constructor invoked
    z2.display();
    // note: in case if u don't mention abt copy constructor in the class, then also the above codes for z1 and z2 will get executed. this happens bcoz if u don't make a copy constructor, the compiler supplies its own copy constructor.


    number z3;
    z3=z; //copy constructor not invoked,bcoz an object is already created and then value is assigned to it 

    cout<<"label"<<endl;
    number z4=z;  //copy constructor invoked
   
    return 0;
}