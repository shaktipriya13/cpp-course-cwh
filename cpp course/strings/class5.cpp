// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.
#include<iostream>
using namespace std;
char toMylower(char c){
    if(c>='A' && c<='Z'){
        char temp=c+'a'-'A';
        return temp;
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
    for(int i=0;i<n;i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
            s[i]=s[i];

        }
        else{
            s.erase(i,1);
            n--;
            i--;
        }
    }
    cout<<"\n"<<s<<endl;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            cout<<"not palindrome phrase"<<endl;
            return;
        }
    }
    cout<<"palindrome phrase"<<endl;
    return;
}


int main(){

    palin("A man, a plan, a canal: Panama");
    palin("race a car");
    palin(" ");
    return 0;
}



//love sirs code
#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    bool valid(char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        
        return 0;
    }
    
    char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
    bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
public:
    bool isPalindrome(string s) {
        
        //faltu character hatado
        string temp = "";
        
        for(int j=0; j<s.length(); j++) {   
            if(valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
        //lowercase me kardo
        for(int j=0; j<temp.length(); j++) { 
            temp[j] = toLowerCase(temp[j]);
        }
        
        //check palindrome
        return checkPalindrome(temp);
        
    }
};
 

