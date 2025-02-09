//code to convert uppercase case to lowercase without built-in fxn
#include<iostream>
using namespace std;
char toMylower(char c){
    if(c>='a' && c<='z'){
        return c;
    }
    else{
        char temp= c+('a'-'A');  //add difference of uppercase and lowercase to  character
        return temp;
        //B= 66 = B+(a-A) = 66+(97-65) =98=B
    }
}
int main(){

    
    cout<<toMylower('N');
    return 0;
}

// ----------------------------------------------------------------------------//code to check palindrome for Malayalam ..taking ucase and lacse same
#include<iostream>

using namespace std;
char toMylower(char c){
    if(c>='a' && c<='z'){
        return c;
    }
    else{
        char temp= c+('a'-'A');  //add difference of uppercase and lowercase to  character
        return temp;
        //B= 66 = B+(a-A) = 66+(97-65) =98=B
    }
}
void palin(string s){
    int n=s.size();
    for(int i=0;i<n;i++){
        s[i]=toMylower(s[i]);
    }
    cout<<s;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            cout<<"\nnot palindrome";
            return ;
        }
    }
    cout<<"\npalindrome";
    return ;
    
}
int main(){
    palin("Malayalam");
    
    return 0;
}

// -----------------------------------------------------------------------------------
//ques: palindrome,variation: take uppercase and lower case as same (Malayalam)

// for a given string,chk if its palindrome or not, consider alphabets and numbers only,ignore symbols and whitespaces
//eg c1d&*#Dc1 is a palindrome

#include<iostream>

using namespace std;
char toMylower(char c){
    if(c>='a' && c<='z'){
        return c;
    }
    else if(c>='A' && c<='Z'){
        char temp= c+('a'-'A');  //add difference of uppercase and lowercase to  character
        return temp;
        //B= 66 = B+(a-A) = 66+(97-65) =98=B
    }
    else{
        return c;
    }
}
void palin(string s){
    int n=s.size();
    for(int i=0;i<n;i++){
        s[i]=toMylower(s[i]);
    }
    cout<<s;
    for(int i=0;i<n;i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')  || (s[i]>='0' && s[i]<='9') ){

            s[i]=s[i];
        }
        else{
            s.erase(i,1);
            n--;
            i--;
        }
    }
    n=s.size();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            cout<<"\nnot palindrome";
            return;
        }
    }
    cout<<"\npalindrome";
    return;
    
}
int main(){
    palin("c1O $d@eeDo1c");
    
    palin("c1O $d@ek/#@!$%%/keDo1c");
    palin("5?36@6?35");
    palin("A man, a plan, a cameL");
    palin(" ");
    
    return 0;
}