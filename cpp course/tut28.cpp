#include<iostream>
using namespace std;
//frwd declaration of y bcoz x uses y
class Y;
class X{
    int data;
    public:
    void setValue(int value){
        data=value;
    }
    friend void add(X,Y);
};
class Y{
    int num;
    public:
    void setValue(int value){
        num=value;
    }
    friend void add(X,Y);
};
void add(X o1,Y o2){  //add takes class x ka object o1 
    cout<<"Summing data of X and Y objects give me: "<<o1.data+o2.num;
}
int main(){

    X a1;
    a1.setValue(3);
    Y b1;
    b1.setValue(4);
    add(a1,b1);
    return 0;
}