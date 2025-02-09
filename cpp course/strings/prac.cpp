#include<iostream>
using namespace std;
//c1d&*#Dc1 is a palindrome
void chkPalin(string arr,int n){
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]>='A' && arr[i]<='Z'){
            arr[i]=arr[i]-'A'+'a';//B 66 = b 98 , B-A + a   
        }
    }
    for(int i=0;i<n;i++){
        if((arr[i]>='a' && arr[i]<='z') || (arr[i]>='0' || arr[i]<='9')){
            arr[i]=arr[i];
        }
        else{
            arr.erase(i,1);
        }
    }
    cout<<"Origina string: "<<arr<<endl;
    int st=0,e=n-1,flag=0;
    while(st<e){
        if(arr[st]!=arr[e]){
            flag=1;
            break;
        }
        st++;
        e--;
    }
    if(flag==1){
        cout<<"Not palindrome";
    }
    else{
        cout<<"palindrome";

    }
}
int main(){
    char arr[90]="c1d&*#Dc1";
    chkPalin(arr,10);
    string s="abi";
    string c=s;
    cout<<c;
    
    return 0;
}