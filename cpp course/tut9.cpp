#include<iostream>
using namespace std;
int main(){
    // selection control structure
    // 1. if-else-if-else ladder
    int age;
    cout<<"enter age:";
    cin>>age;
    // if(age>0 && age<18){
    //     cout<<"\ncan't vote"<<endl;
    // }
    // else if(age<0){
    //     cout<<"not born yet"<<endl;
    // }
    // else if(age==18){
    //     cout<<"not mandatory"<<endl;
    // }
    // else{
    //     cout<<"vote today";
    // }

    // 2.SWITCH STATEMENTS- better alternative option to use if-else
    
    switch (age)
    {
    case 18:
        cout<<"you are 18";
        // break;
    case 22:
        cout<<"you are adult";
        // break;
    case 0:
        cout<<"you are child";
        // break;
    
    default:
        cout<<"No specail cases";
        // break;
    }
// NOTE:
// in switch case, jo case match krega control usi me jayega

// if there is no break, then all the statements will get printed.
// agar 22 is given input with no breaks then wo and uske bad wale hi bas print hoge
// In C++, the switch statement doesn't directly support complex conditions or expressions within the case labels. The case labels are typically constants or constant expressions, not general boolean conditions or expressions.
// so "case (age>18)" is not valid


// To handle conditions based on age in a switch-like manner, you can utilize if-else statements instead.
}
