// This is a function problem. You only need to complete the function nextLargerElement() that takes list of integers arr[ ] and N as input parameters and returns list of integers of length N denoting the next greater elements for all the corresponding elements in the input array.
#include<iostream>
using namespace std;
void fxn(int arr[],int n){
    int min[n];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                min[i]=arr[j];
                goto l1;
            }
            else{
                min[i]=-1;
                goto l1;
            }
        }
        l1:
        cout<<" ";
    }
    cout<<"required values are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<min[i]<<" ";
    }
}


int main(){

    int arr[]={6,8,0,1,3};
    fxn(arr,5);
    return 0;
}