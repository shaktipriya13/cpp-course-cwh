//Overloading Template Functions in C++ :
//template function overloading refers to the ability to define multiple function templates with the same name but with different template parameter lists or different numbers/types of parameters.
#include<iostream>
using namespace std;
template <class t> //template for class
class harry{
    public:
        t data;
        harry(t a){
            data=a;
        }
        void display(); //jaruri nhi ha ki aap fxn ko inline hi banaye...bad me bhi define kr skte ha
};
template <class t>  //function template
void harry<t>::display(){
    cout<<data;
}
void func(int a){
    cout<<"I am first func()"<<endl;
}

template <class t>
void func(t a){
    cout<<"I am templatized function()."<<endl;
}
int main(){
    // harry<int> h1(5);
    // cout<<h1.data<<endl;
    // h1.display();

    // harry<char> h2('h');
    // cout<<h2.data<<endl;
    // h2.display();
    func(4); //exact match takes the highest priority..after this, the template fxn can run
    func('o');

    
    return 0;
}