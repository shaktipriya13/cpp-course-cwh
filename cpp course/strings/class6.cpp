// Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

// Example 1:

// Input: s = "the sky is blue"
// Output: "blue is sky the"
#include<iostream>
using namespace std;
string reverseWords(string s){

    int c=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            k++;
        }
    }
    for(int j=0;j<c;j++){

        for(int i=c;s[i]==' ';i++){
            c=i-1;

        }
        for(int i=0;i<=c;i++){
            swap(s[i],s[c-i]);
        }
        c++;
    }

}
int main(){

    
    return 0;
}