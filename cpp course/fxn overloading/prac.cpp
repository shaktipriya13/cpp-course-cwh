#include<iostream>
using namespace std;
template <class t>
void swapp(t &a,t &b){
    t temp=a;
    a=b;
    b=temp;

}
int main(){
    int a=9,b=7;
    swapp(a,b);
    cout<<a<<b;
    
    return 0;
}