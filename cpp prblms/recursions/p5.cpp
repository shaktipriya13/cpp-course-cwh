//  Write a C++ program to implement a recursive function to calculate the power of a number.
#include<iostream>
using namespace std;
int powNum(int n,int p){
    if(p==0){
        return 1;
    }
    else if(p==1){
        return n;
    }
    else{
        return n*powNum(n,p-1);
    }
}
int main(){
    int a=powNum(7,3);
    cout<<a;
    
    return 0;
}