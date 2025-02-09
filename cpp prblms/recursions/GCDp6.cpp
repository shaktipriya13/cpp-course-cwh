// Write a C++ program to implement a recursive function to find the greatest common divisor (GCD) of two numbers.


 GCD stands for "Greatest Common Divisor." It refers to the largest positive integer that divides two or more numbers without leaving a remainder. 

// The GCD of 8 and 12 is 4 because 4 is the largest number that divides both 8 and 12 without leaving a remainder.

// code to find gcd of 2 nums
// #include<iostream>
// using namespace std;

// int findGcd(int a,int b){
//     int max=(a>b)?a:b;
//     int min=(a<b)?a:b;
    
//     int g;
//     for(int i=1;i<=min;i++){
//         if(min%i==0){
//             if(max%i==0){
//                 g=i;
//             }
//         }
//     }
//     return g;
// }
// int main(){
//     int a,b;
//     cout<<"enter 2 nums:";
//     cin>>a>>b;
//     int num=findGcd(a,b);
//     cout<<"gcd of given numbers : "<<num;
//     return 0;
// }

// Write a C++ program to implement a recursive function to find the greatest common divisor (GCD) of two numbers.
#include<iostream>
using namespace std;
int findGcd(int a,int b){
    // The greatest common divisor (GCD) of any number and 0 is always the non-zero number itself. In the case of 3 and 0:

// a must be big and b must be small else they will reverse after first pass

// GCD(3, 0) = 3
    if(b==0){
        return a;
    }
    else{
        return findGcd(b,a%b);
    }
}
int main(){
    int g=findGcd(7,70);
    cout<<g;
    
    return 0;
}