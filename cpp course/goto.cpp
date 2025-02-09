#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter n:";
    cin>>n;
    if(n%2==0){
        goto even;
        }
    else{goto odd;}
    even:  ///called label
    cout<<"no. is even";
    return 0;
    odd:
    cout<<"no. is odd";
    return 0;
    return 0;
}