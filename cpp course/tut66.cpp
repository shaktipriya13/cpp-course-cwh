//Class Templates with Default Parameters :
//Its ability to have default specifications about the data type, when it receives no arguments from the main.

#include<iostream>
using namespace std;
template <class t1=int ,class t2=float, class t3=char>
//t1,t2,t3 are called template parameters
class harry{
    public:
        t1 a;
        t2 b;
        t3 c;
        harry(t1 x,t2 y,t3 z){
            a=x;
            b=y;
            c=z;
        }
        void display(){
            cout<<"value of a is: "<<a<<endl;
            cout<<"value of b is: "<<b<<endl;
            cout<<"value of c is: "<<c<<endl;
        }
};
int main(){
    
    harry <>h1(8,8.9,'p'); //for using the defautlt datatypes of template , write empty <> abgular brackets...just like we pass empty brackets in fxns to use defautlt args
    h1.display();

    harry <char>h2('o',9.8,'l');
    h2.display();

    harry <char,char,int> h3('p','q',6);
    h3.display();

    harry<float,char,char> h4('d','o','c');
    h4.display(); //program will misbehave in such cases if the agruments are not matching..here printing ASCII values

    
    return 0;
}