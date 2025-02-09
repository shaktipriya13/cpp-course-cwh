// Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.

// Note: There are no duplicates in the list
#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,9,8,6,5};
    int n,sum,c=0,x;
    n=sizeof(arr)/sizeof(arr[0]);
    n+=1;
    sum= (n*(n+1))/2;
    
    for(int i=0;i<n-1;i++){
        c+=arr[i];
    }
    x=sum-c;
    cout<<x;
    return 0;
}