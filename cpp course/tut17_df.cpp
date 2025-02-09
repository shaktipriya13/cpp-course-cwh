`// Default arguments
// In C++, default arguments allow you to assign default values to parameters in a function declaration. These default values are used when the caller of the function doesn't provide corresponding arguments for those parameters. 

// default arguments are always written after the non-default args.


#include<iostream>
using namespace std;
float moneyReceived(int money,float factor=1.04){
    return money*factor;
}
int main(){
    int m;

    cout<<"enter money: "<<endl;
    cin>>m;
    cout<<"If you have "<<m<<"in your bank account ,you will receive "<<moneyReceived(m)<<"after 1 year."<<endl;

    cout<<"For VIP: If you have "<<m<<"in your bank account ,you will receive "<<moneyReceived(m,1.12)<<"after 1 year."<<endl;    
    return 0;
}

 // CONSTANT ARGUMENTS:
// In C++, constant arguments refer to parameters passed to functions that are declared as const. These parameters ensure that the function doesn't modify the value of the argument within its body.
//  Declaring function parameters as const ensures that the function doesn’t modify the value of those parameters. It helps maintain the integrity of the passed argument.
// Constant arguments help prevent accidental modifications within functions. If a function attempts to modify a const argument, it leads to a compilation error.

// this is mostly used for reference varaibles and pointers
#include<iostream>
using namespace std;
int modify(const char*p,char j,char t){
    //The use of const in const char* p indicates that the pointer p points to a constant character. 
    
    //p is declared in above as pointer to const charcater
    //p is a pointer and holds a memory address(say:89o);
    *p=j;  //throw error...it attempts to change the value stored at address 89o
    p=&t;  //no error as You are just reassigning p to point to a different memory location 
} 
void modify(const int n){
    n=n+1;
    // will give compilation error
    cout<<n;
}
int main(){

    modify(9);
    return 0;
}