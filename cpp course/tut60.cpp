//FILE INPUT/OUTPUT:

#include<iostream>
#include<fstream> //header file
using namespace std;
/*The useful classes for working with files in CPP are :
1. fstreambaseclass
2. ifstream  (i for input) -->derived from fstreambase (stands for input file stream)
3. ofstream  (o for output)-->derived from fstreambase
-->these above classes are available in fstream
-->these above classes help us in doing input/ouput


*/

/*
In order to work with files in CPP, you will hv to open it. Primarily, there are 2 ways to open it:
1. using the constructor 
2. using the member fxn open() of the class
*/
int main(){
    //writing - ofstream, reading -ifstream
    string s2;
    //Opening files using constructor and writing it :
    // -->to open file using the constructor, we will have to create an object of the class ofstream
    
    string st="Harry bhai";
    ofstream object("sample60.txt");  //ofstream me cout ka sign is used
    //will help to do the write operation in sample60.txt
    object<<st;
    object.close();
    // write operation me aisa socho ki likhkar output dena ha dusre file ko

    

    //opening files using a constructor and reading from it:
    ifstream read_file("sample60b.txt");
    //When we use ifstream ,then the spaces and newlines don't come
    read_file>>s2;
    cout<<s2;
    //to read the entire line, we an use the getline fxn
    getline(read_file,s2);
    cout<<s2;
    //read_file is an ifstream object and s2 is the object jisme string lena ha
    getline(read_file,s2); //this will read the second line
    cout<<s2;
    read_file.close();
}