// to store a string with spaces,cin can't do it, so use getline(cin,s);
//learn custom delimiter
#include<iostream>
using namespace std;

int main(){
    //custom delimiter
    string s;
    cout<<"enter string: "<<endl;
    getline(cin,s);
    cout<<s;
    return 0;
}