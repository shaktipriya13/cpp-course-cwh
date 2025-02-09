#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}


// CALL BY REFERENCE using pointers
void swapPointer(int* a, int* b){

    // yaha fxn address ke through us variable ko find krke uski value ko change kr dega
    int temp= *a;
    // temp =value at address a

    *a=*b;
    // value at address a =value at address b

    *b=temp;
}




int main(){
    int x=9,y=8;

    // 'CALL BY VALUE'
    swap(x,y);

    // actual arguments x and y are alwys copied to the formal arguments. They are not passed directly to the fxn swap ...only their values ar copied to a and b.

    // so the actual variables  x and y don't get affected on passing to fxn swap

    
    cout<<"x= "<<x<<endl<<"y= "<<y<<endl;

// *************************************************************

// CALL BY REFERENCE through pointers

    // int x=9,y=8;
    cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
    swapPointer(&x,&y);
    // in swapPointer fxn, address of x and ya re passed
    cout<<"x= "<<x<<endl<<"y= "<<y<<endl;



    
    return 0;
}

// note: SWAP TRICK
// a=a+b;
// b=a-b;
// a=a-b;