

// *******made user snippets..boiler plate code********

#include<iostream>
using namespace std;

int main(){
    // break and continue can be used with all types of loops

    // for (int i = 0; i < 40; i++)
    // {
    //     if(i==2){
    //         break; //used to come out of a loop
    //     }
    //     cout<<i<<endl;
        
    // }
    for (int i = 0; i < 40; i++)
    {
        if(i==2){
            continue; //used to skip a particular iteration
        }
        cout<<i<<endl;
        
    }
    // using continue in do while loop for printing table:

    int i=1;
    do{
        if(i==3){
            i++;
            continue;
        }
        else{
            cout<<"6 X "<<i<<" = "<<6*i<<endl;
            i++;
        }
        
    }while(i<=10);




    return 0;
}