#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int nums=0;
        if(b>a){
            nums+=1;
        }
        if(c>a){
            nums+=1;
        }
        if(d>a){
            nums+=1;
        }
        cout<<nums<<endl;
    }
    return 0;
}