#include<iostream>
using namespace std;


// NOTE:
// In C++ (and C), when the return statement is encountered within the main function or any other function, it signifies the end of that function's execution. Any code written after the return statement within the same function won't be executed because the function is already exiting at that point.


int main(){

    // declaring array
    int marks[]={45,89,90,36};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;


    // 2nd method:
    int arr[4];
    arr[0]=9;
    arr[1]=4;
    arr[2]=3;
    arr[3]=8;
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // arr[2]=100;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // for(int i=0;i<4;i++){
    //     cout<<"The value of marks "<<i<<" is "<<arr[i]<<endl;
    // }
    int i=0;
    // do{

    //     cout<<"The value of marks "<<i<<" is "<<arr[i]<<endl;
    //     i++;
    // }while(i<4);
    // return 0;

    while(i<4){
        cout<<"The value of marks "<<i<<" is "<<arr[i]<<endl;
        i++;
    }

    // CPP POINTERS AND ARRAYS
    int num[8];
    int* b=num;
    cout<<"\naddress of marks array is"<<b<<endl<<endl;

    // POINTER ARITHMETIC
    int price[]={34,82,56,95};
    int* p=price;
    cout<<p<<endl;
    cout<<"value of *p or price[0] is "<<*p<<endl;
    cout<<"value of *(p+1) or price[1] is "<<*(p+1)<<endl;
    cout<<"value of *(p+2) or price[2] is "<<*(p+2)<<endl;
    cout<<"value of *(p+3) or price[3] is "<<*(p+3)<<endl;

    cout<<*p<<endl;
    cout<<*(p++)<<endl; //first p is printed, then incremented //34
    cout<<*(++p)<<endl;


}