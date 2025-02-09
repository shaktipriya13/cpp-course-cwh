// 35.Write a code to Remove space from a string
#include<iostream>
using namespace std;

void remSp(){
    char str[100];
    int n = 100;

    cout << "Enter string: ";
    cin.getline(str, n); // Use getline to capture entire string with spaces

    int count = 0; // To keep track of non-space characters

    // Shift non-space characters to the left
    for(int i = 0; i < n; i++){
        if(str[i] != ' '){
            str[count++] = str[i];
        }
    }

    str[count] = '\0'; // Add null character at the end to signify end of string

    cout << "String without spaces: " << str << endl;
}

int main(){
    remSp();
    return 0;
}

// note:// for(int i=0;i<n;i++){
    //     cin>>str[i];
    // }
    // Using cin to input a string will read until it encounters whitespace, so it won't capture a string with spaces properly. 