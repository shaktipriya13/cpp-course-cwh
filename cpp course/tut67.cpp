//Function Templates-->they help us to avoid making overloading fxns...making fxns again and again with different datatypes
#include<iostream>
using namespace std;
// float funcAverage(int a , int b){

//     float avg=(a+b)/2.0;
//     return avg;
// }
// float funcAverage2(int a,float b){
//     float avg=(a+b)/2.0;
//     return avg;
// }

// so, instead of changing datatype and make a new class everytime, it's better we make a function template 

template <class t1, class t2>
float funcAverage(t1 a,t2 b){
    float avg=(a+b)/2.0;
    return avg;
}


//fxn template for swap fxn
template <class t>
void swapp(t &a,t &b){
    t temp=a;
    a=b;
    b=temp;
}

int main(){
    // float a;
    // a=funcAverage(5,2.9);
    // printf("The average of these numbers is: %.3f\n",a);
    // a=funcAverage2(5,2.9);
    // printf("The average of these numbers is: %.3f",a);

    int a=7,b=6;
    swapp(a,b);  //Use the same type for both a and b.,bcoz else it will contradict the fxn's definition
    cout<<a<<b;
    
    return 0;
}