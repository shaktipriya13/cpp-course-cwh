//Virtual Base Class in C++
// The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple instances. 
#include<iostream>
using namespace std;
/*
Inheritance:
student--->test
student--->sports
test--->result
sports--->result
*/

class student{
    protected:
        int roll;
    public:
        void set_roll(int r){
            roll=r;
        }
        void print_roll(){
            cout<<"Roll number of this student is: "<<roll<<endl;
        }
};
class test:virtual public student{
    //or write public virtual student
    protected:
        float m1,m2;
    public:
        void set_marks(float x,float y){
            m1=x,m2=y;
        }
        void print_marks(void){
            //train of couts can be written like this:
            cout<<"Your result is here: "<<endl
                <<"Maths: "<<m1<<endl
                <<"Physics: "<<m2<<endl;
        }
};
class sports:public virtual student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score=sc;
        }
        void print_score(){
            cout<<"Your score is : "<<score<<endl;
        }

};
class result: public test,public sports{
    private:
        float total;
    public:
            // total=m1+m2+score; --->this line gives error bcoz we can't do such opeartions independently inside a class...u can do them under a fxn definition only
        void display(void){
            print_roll();
            print_marks();
            print_score();
            total=m1+m2+score;
            cout<<"Total marks is: "<<total;
        }
};
int main(){
    result harry;
    harry.set_roll(9);
    harry.set_marks(75,40);
    harry.set_score(567);

    harry.display();
    
    return 0;
}