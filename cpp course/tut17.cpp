// inline fxn
#include<iostream>
using namespace std;
inline int product(int a,int b){
    static int c=0;
    c=c+1;
    return a*b+c;
}
int main(){
    int a=8,b=5;

    // making an inline fxn is a request to the compiler..the compiler may reject or accept it depending on ur fxn 
    
    // Each time the value of product is different, bcoz each time the value of c changes when the fxn is called...
    cout<<"product of a and b is : "<<product(a,b)<<endl;
    cout<<"product of a and b is : "<<product(a,b)<<endl;
    cout<<"product of a and b is : "<<product(a,b)<<endl;
    cout<<"product of a and b is : "<<product(a,b)<<endl;
    cout<<"product of a and b is : "<<product(a,b)<<endl;
    cout<<"product of a and b is : "<<product(a,b)<<endl;
    cout<<"product of a and b is : "<<product(a,b)<<endl;
    cout<<"product of a and b is : "<<product(a,b)<<endl;
    cout<<"product of a and b is : "<<product(a,b)<<endl;
    cout<<"product of a and b is : "<<product(a,b)<<endl;
    
    return 0;
}