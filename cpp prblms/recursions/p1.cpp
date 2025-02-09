// Write a C++ program to find the sum of all elements in an array using recursion.
#include<iostream>
using namespace std;
int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    else{
        return arr[n-1]+sum(arr,n-1);
    }

}
int main(){

    int parr[]={3,4,4,5};
    int s=sum(parr,4);
    cout<<s;
    return 0;
}