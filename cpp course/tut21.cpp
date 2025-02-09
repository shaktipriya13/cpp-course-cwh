// creating classes_code
#include<iostream>
using namespace std;
class employee{    //creating a class implies making a new dataype of employee
    private:
        int a,b,c;
    public:
        int d, e;
        // there are 2 ways to define fxn
        void setData(int a1,int b1,int c1);  //declaration
        void getData(){
            cout<<"value of a is "<<a<<endl;
            cout<<"value of b is "<<b<<endl;
            cout<<"value of c is "<<c<<endl;
            cout<<"value of d is "<<d<<endl;
            cout<<"value of e is "<<e<<endl;
        }
}Goli,Nikhil;
void employee:: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee harry;
    harry.d=9;
    harry.e=8;

    // harry.a=9; ....this will show error bcoz a is private variable...and can't be accessed easily outside the class...can be accessed only by the fxn inside class

    harry.setData(1,2,6);
    harry.getData();
    
    return 0;
}
// note: if public/private is not declared ,then the variables are taken as private by default