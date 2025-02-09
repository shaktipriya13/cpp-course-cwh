#include <iostream>

using namespace std;
int main()
{
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */
    // for loop
    // intialization ek hi bar execute hota ha
    // Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }
    // for(int i=0;i<10;i++){
    //     cout<<i<<endl;
    // }
    // example of infinite for loop
    // for(int j=1;45<90;j++){
    //     cout<<j<<endl;
    // } 
    // infinite loop keval glti se hi nhi banta ha,,,sometimes we make them intenionally for some task 



// /*While loop in C++*/
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    //  Printing 1 to 40 using while loop
    // int k=0;
    // while(k<10){
    //     cout<<k<<endl;
    //     k++;
    // }
    // }


    // infinite while loop
    // int j=0;
    // while(true){
    //     cout<<j<<endl;
    //     j++;
    // }


// DO WHILE LOOP
    int c=0;
    do{
        cout<<c<<endl;
        c++;
    }while(c<=10);
    // }while(false); //will print only 1 time 

    // infinite do while loop
    int i=1;
    do{
        cout<<"6 X "<<i<<" = "<<6*i<<endl;
        i++;
    }while(true);
    
}