#include<iostream>
using namespace std;
void prime(int x);
int main(){
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;
    prime(n);
    return 0;
}
void prime(int x){
    if(x==1){
        cout<<" not prime";
    }
    else{

        int c=0;
        for(int i=0;i<x;i++){
            if(x%i==0){
                c+=1;
            }
        }
        if(c==2){
            cout<<"\nPrime no.";
        }
        else{
            cout<<" not prime";
        }
    }

}