//Opening text file in CPP program using member fxn 'open()'
//as soon our program execution finishes, the file gets automatically closed..but good practice is to close the file explicitly once the work is done
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
///better method than constructor is to use the file.open() and file.close()
int main(){
    //way to write the file in cpp
    ofstream out; //ofstream me cout ka sign is used
    out.open("sample60.txt");
    out<<"This is first line.\nHello\n";
    out<<"This is second line.";
    out.close();


    //way to read in cpp file
    ifstream in;
    string st,st2;
    in.open("sample60.txt");
    in>>st>>st2;
    cout<<st<<st2;
    //we can also use a while loop for printing:

    while(in.eof()==0){   //eof is end of file
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    
    return 0;
}