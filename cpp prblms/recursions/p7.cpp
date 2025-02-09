// wap in cpp to find lcm using recursion
// lcm without recursion can done by using gcd without recursion and formula of lcm
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int findLcm(int a,int b){
    // lcm is the least no. that can be divided by both
    // Use the formula: LCM = (Number1 * Number2) / GCD(Number1, Number2)
    int l=(a*b)/gcd(a,b);
    return l;
}
int main(){
    int l=findLcm(9,4);
    cout<<l;
    
    return 0;
}