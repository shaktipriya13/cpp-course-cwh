// 25.Write a program for Binary to Decimal conversion
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void conv(){
    string s;
    cout<<"enter a binary number: "<<endl;
    cin>>s;
    int c=0;
    int n=s.length();
    for(int i=n-1;i>=0;i--){
        int p=n-i-1;
        if(s[i]=='1'){
            c+=pow(2,p);
        }
    }
    cout<<"Decimal value of given binary no. is: "<<c;
}
int main(){
    conv();
    
    return 0;
}
