//strings:
// std::string stores its data internally in the form of a null termintaed C-string, but in normal uasge does not allow u to access the null terminator...so size is shown excluding the null character


//string stores hello as hello\0....
//code: to find length
#include<iostream>
using namespace std;

int main(){

    string str="hello";
    for(int i=0;str[i]!='\0';++i){ //++i or i++ both will yield the same result
        cout<<str[i];
    }
    
    return 0;
}
// ----------------------------------------------------------------------------
// the push_back() method is used to add a character to the end of a string. It appends the given character to the existing string.
// str.push_back(' ') appends a space character to the string.
// str.push_back('W'), str.push_back('o'), and so on, add individual characters to the end of the string.
#include<iostream>
using namespace std;

int main(){

    string s="hello";
    s.push_back(' ');
    s.push_back('o');
    s.push_back('l');
    s.push_back('p');
    s.push_back('y');
    s.push_back(' ');
    cout<<s.size();
    cout<<s<<endl;
    cout<<s.size();  //6 including last space also

    //pop_back
    string s="hello";
    s.pop_back();
    cout<<s;
    
    return 0;
}