#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        int j,n=0,sq;
        unsigned long int b;
        unsigned long long int wb[b];
        cin>>b;
        for(j=0;j<b;j++){
            cin>>wb[j];
        }
        for(j=0;j<b;j++){
            n+=wb[j];
        }
        sq=sqrt(n);
        if(sq*sq==n){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }


    }
    return 0;
}