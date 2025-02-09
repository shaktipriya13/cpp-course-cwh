// Multi-Level Inheritance Deep Dive

//use of inheritance will make sense in complex programs like game programming like GTA VICE CITY

#include<iostream>
using namespace std;
//make 1st class
class student{
    protected:
        int roll_no;
    public:
        void set_roll_no(int n);
        void get_roll_no(void);
};
void student::set_roll_no(int r){
    roll_no=r;
}
void student:: get_roll_no(){
    cout<<"Roll no. of this student is: "<<roll_no<<endl;
}

//making 1st derived class
class exam:public student{
    protected:
        float physics;
        float maths;
    public:
        void set_marks(float,float);
        void get_marks(void);

};
void exam::set_marks(float p,float m){
    physics=p;
    maths=m;
}
void exam::get_marks(){
    cout<<"marks of maths are: "<<maths<<endl;
    cout<<"marks of physics are: "<<physics<<endl;
}
//making 3rd derived class
class result: public exam{
    protected:
        float percentage;
    public:
        void displayResult(){
            get_roll_no();
            get_marks();
            cout<<"percentage obtained = "<<((maths+physics)/2)<<"%"<<endl;
        }
};


/*Notes:

    1. If we are inheriting B from A and C from B: [A--->B--->C]
    2. A--->B--->C is called inheritance path
*/


int main(){
    result r1;
    r1.set_roll_no(5);
    r1.set_marks(45.0,90.0);
    // r1.get_roll_no();
    // r1.get_marks();
    r1.displayResult();
    
    return 0;
}

// note:
// Intellisense error: often related to code syntax, library references, or configuration issues. 