//learn nested classes bad me

// Multiple Inheritance Deep Dive 

#include<iostream>
using namespace std;
// syntax for inheriting in multiple inheritance
// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

//MAKING 3 BASE CLASSES
class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int=a;
        }

};
class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int=a;
        }

};
class Base3{
    protected:
        int base3int;
    public:
        void set_base3int(int a){
            base3int=a;
        }

};

class Derived: public Base1, public Base2,public Base3{
    public:
        void show(){
            cout<<"The value of base1 is : "<<base1int<<endl;
            cout<<"The value of base2 is : "<<base2int<<endl;
            cout<<"The value of base3 is : "<<base3int<<endl;
            cout<<"sum of values of base1 ,base 2 and base3 are : "<<base1int+base2int+base3int<<endl;
        }
};
//asked in interviews & exams: konsa member kya hoga?
/*
The inherited derived class will look something like this:
Data members:
    base1int-->protected
    base2int-->protected

Member fxns:
    set_base1int()-->public
    set_base2int()-->public
    show()-->public
*/

//there can be many base classes
int main(){
    Derived harry;
    harry.set_base1int(9);
    harry.set_base2int(2);
    harry.set_base3int(32);
    harry.show();
    
    return 0;
}

//above code using initializtion list:
#include<iostream>
using namespace std;
class base1{
    protected:
        int a;
    public:
        base1(int v1):a(v1){};
};
class base2{
    protected:
    int b;
    public:
    base2(int v2):b(v2){}
};
class base3{
    protected:
    int c;
    public:
    base3(int v3):c(v3){}
};
class d:public base1,public base2,public base3{
    public:
        d(int v1,int v2,int v3):base1(v1),base2(v2),base3(v3){

        }
        void show(){
            cout<<"a ki value: "<<a<<endl;
            cout<<"b ki value: "<<b<<endl;
            cout<<"c ki value: "<<c<<endl;
        }
};
int main(){
    d d1(9,7,5);
    d1.show();

    
    return 0;
}

