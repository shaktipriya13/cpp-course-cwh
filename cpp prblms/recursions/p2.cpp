// Write a C++ program to implement a recursive function to calculate the sum of digits of a given number.

#include<iostream>
using namespace std;
int sum(int n){
    if(n==0||n==1||n==3||n==4||n==5||n==6|n==7||n==8||n==9){
//   or   if(n>=0 || n<=9){
        return n;
    }
    else{
        int rem=n%10,quo=n/10;
        return rem+sum(quo);
    }
}
int main(){
    int s=sum(11239);
    cout<<s;
    return 0;
}