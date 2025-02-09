// complex example of classes-here we will swap the private data of 2 classes
#include<iostream>
using namespace std;
//frwd declaration
class c2;
class c1{
    int val1;
    friend void exchange(c1 &, c2 &); //u can just pass the reference type...mentionig name of variable not imp
    public:
        void indata(int a){
            val1=a;
        }
        void display(void){
            cout<<val1<<endl;
        }
};
class c2{
    int val2;
    public:
        void indata(int a){
            val2=a;
        }
        void display(void){
            cout<<val2<<endl;
        }
        friend void exchange(c1 & , c2 &);
};
void exchange(c1 &x, c2 &y){   //creating reference for swap like int &a,int &b 
    int tmp=x.val1;
    x.val1=y.val2;
    y.val2=tmp;
}
int main(){
    c1 oc1;
    c2 oc2;
    oc1.indata(90);
    oc2.indata(20);
    exchange(oc1,oc2);
    cout<<"value of oc1 after swap is : ",oc1.display();
    cout<<"value of oc1 after swap is : ",oc2.display();
    
    return 0;
}