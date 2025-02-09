// wild characters
// concept
//in programming, regular expressions leverage wildcard characters to define patterns for searching or manipulating strings within a larger body of text.

// Wildcards provide flexibility and power in pattern matching, enabling broader and more efficient searches or selections based on specific patterns rather than exact matches.

// They're particularly useful in situations where you want to match multiple strings that follow a certain pattern rather than a specific sequence of characters.

// Some common wildcard characters are:

// Asterisk (*): Matches zero or more characters in a string.

// Example: "fi*e" could match "fire," "fibre," "finite," etc.
// Question mark (?): Matches any single character in a string.

//  Example: "te?t" could match "test," "text," etc.


//*****************************************************************

// Question
// Write code to check if two strings match where one string contains wildcard characters

#include<iostream>
#include<string>
using namespace std;

void wild(string s1,string s2){
    string x;
    if(s1.length()!=s2.length()){
        cout<<"strings don't match";
    }
    else{
        int n=s1.length(),c=0;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i] || s1[i]=='*'||s2[i]=='*'){

                //s[i]=="*" gives error as single charcters hv to be enclosed in single quotes else are treated as string literals(sequence of characters)
                c+=1;
            }
        }
        if(c==n){
            cout<<"both strings match"<<endl;
        }
        else{
            cout<<"strings don't match";
        }
    }
}
int main(){
    wild("file","fsm*e");

    
    return 0;
}

// corrected code:
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    //Initialize the variables.
    string wild,str;
    
    //Accept the inputs.
    cout<<"Enter string containing wild characters: "; cin>>wild;
    cout<<"Enter string to be matched: "; cin>>str;

    bool TRUE=true,FALSE=false;

    bool check[wild.length()+1][str.length()+1];

    check[0][0]=TRUE;

    for(int i=1;i<=str.length();i++)

       check[0][i]=FALSE;

    for(int i=1;i<=wild.length();i++)

        if(wild[i-1] == '*')//Checking for wild characters.

            check[i][0]=check[i-1][0];

    else

        check[i][0]=FALSE;

    for(int i=1;i<=wild.length();i++)

    {

        for(int j=1;j<=wild.length();j++)

        {

            if(wild[i-1] == str[j-1])

                check[i][j]=check[i-1][j-1];

            else if(wild[i-1] == '?')//Checking for wild character '?'.

                check[i][j]=check[i-1][j-1];

            else if(wild[i-1] == '*')//Checking for wild character '*'.

                check[i][j]=check[i-1][j]||check[i][j-1];
                
            else
               check[i][j] =FALSE;

        }

    }

    //Printing result
    if(check[wild.length()][str.length()])
        cout<<"TRUE";
    else
        cout<<"FALSE</span.";

}