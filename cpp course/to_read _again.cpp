//1. tut 17_df
#include<iostream>
using namespace std;
int modify(const char*p,char j,char t){
    //The use of const in const char* p indicates that the pointer p points to a constant character. 
    
    //p is declared in above as pointer to const charcater
    //p is a pointer and holds a memory address(say:89o);
    *p=j;  //throw error...it attempts to change the value stored at address 89o
    p=&t;  //no error as You are just reassigning p to point to a different memory location 
} 
int main(){

    modify(9);
    return 0;
}