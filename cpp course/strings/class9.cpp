//find fxn:
// find() function, helps locate substrings within a string. It returns the position of the first occurrence of the substring within the given string.
// The value -1 is returned by find() when the substring is not found within the string. 
//code:
#include <iostream>
using namespace std;

int main() {
    string s = "hello shakti";
    int c = s.find("priya");
    cout << c;
    return 0;
}
// -----------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
string replaceSpaces(string s){
	// Write your code here.
    // Coding@40Ninjas@40Is@40A@40Coding@40Platform
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            s.replace(i,1,"@40");
            //replace method comes with std class. it is used to replace portions of a string with another string or a substring. This method allows you to specify the position and length of the substring to be replaced and the string that will replace it.
            //here i is starting index and 1 is length
        }
    }
    return s;

	
}
int main(){

    string s;
    cout<<"enter ur string: "<<endl;
    getline(cin,s);
    cout<<s<<endl;
    string n=replaceSpaces(s);
    cout<<n;
    return 0;
}

//other eg:
#include <iostream>
using namespace std;

int main() {
    string str = "The quick brown fox jumps over the lazy dog.";

    // Replace "brown" with "red"
    str.replace(str.find("brown"), 5, "red");

    cout << "After replacement: " << str << endl;
    return 0;
}
