//Class Templates with Multiple(coamma separated) Parameters- 

// how to handle multiple parameters in a template.


//mtlb ek template me multiple parameters ko pas krna jinka different datatypes honge...just like we pass arguments in fxns


/*
Syntax:
template <class T1, class T2> --------->//means t1 ,t2 are datatypes which i will specify when i will make objects

class nameOfClass{
    //body
}
*/
#include<iostream>
using namespace std;
template<class t1,class t2> //This template does the work of many many classes //there can be more than 2 custom datatypes also
//these t1, t2 can also be classes...they need not to be datatype always
class myClass{
    public:
        t1 data1;
        t2 data2;
        void display(){
            // cout<<data1<<data2;    or write: 
            cout<<this->data1<<this->data2;
        }
        myClass(t1 a,t2 b){
            data1=a;
            data2=b;
        }
};

int main(){
    // myClass <int,char> o1,o2;
    // o1.data1=6;
    // o1.data2='u';
    // o1.display();
    // cout<<endl;
    // myClass <float,int> o3;
    // o3.data1=7.99;
    // o3.data2=29;
    // o3.display();

    myClass <int,char>o4(9,'j');
    o4.display();

    myClass <char,char>o6('i','j');
    o6.display();
    
    
    return 0;
}