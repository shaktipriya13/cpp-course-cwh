//Opening text file in CPP program using constructor


//using sample60 and sample60b.txt 
#include<iostream>
#include<fstream>
using namespace std;

int main(){

//connecting our file with hout stream
    ofstream hout("sample60.txt");
    //creating a name string entered by the user
    string name;
    cout<<"Enter your name: "<<endl;
    cin>>name;

    //writing a string to the file
    hout<<name<<endl;
    hout<<"My name is: "<<name;

//note: Always close the file after writing

    hout.close(); //this will close the link b/w this cpp program and the sample60.txt file

    //reading operation to file
    ifstream hin("sample60.txt");
    string content;
    // hin>>content;
    getline(hin,content);
    cout<<"The content of this file is: "<<content;

//Suppose we have a file named sample60.txt in the same directory, we can easily call the file infinite number of times in the same program only by maintaining different connections for different purposes, using
//<object_name>.close();

    hin.close(); //used to close file
    return 0;
}