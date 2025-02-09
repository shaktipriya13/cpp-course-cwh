#include<iostream>
using namespace std;

int main(){
// converts a number into binary 
    int n,arr[10],k=0;
    
    cout<<"enter num: "<<endl;
    cin>>n;
    // cout<<"number in binary form: ";

    do{
        arr[k]=n%2;
        n=n/2;
        k++;

    }while(n!=0);
    for(int i=k-1;i>=0;i--){
        cout<<arr[i];
    }
    return 0;
}