//  Write a C++ program to implement a recursive function to calculate the sum of even and odd numbers in a given range



#include<iostream>
using namespace std;

int sum_Even_odd(int start,int end,int &esum,int &osum){
    if(start>end){
        return 0;
    }
    if(start%2==0){
        esum+=start;
    }
    else{
        osum+=start;
    }
    sum_Even_odd(start+1,end,esum,osum);
}
int main(){
    int esum=0,osum=0;
    sum_Even_odd(9,20,esum,osum);
    cout<<"Even nums sum= "<<esum<<endl;
    cout<<"Odd nums sum= "<<osum<<endl;
    return 0;
}



// other way:
// //  Write a C++ program to implement a recursive function to calculate the sum of even and odd numbers in a given range



#include<iostream>
using namespace std;
static int esum=0;
static int osum=0;
int sum_Even_odd(int start,int end){
    if(start>end){
        return 0;
    }
    if(start%2==0){
        esum+=start;
    }
    else{
        osum+=start;
    }
    sum_Even_odd(start+1,end);
}
int main(){

    sum_Even_odd(9,20);
    cout<<"Even nums sum= "<<esum<<endl;
    cout<<"Odd nums sum= "<<osum<<endl;
    return 0;
}