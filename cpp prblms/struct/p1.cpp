// C++ Program to Add Two Complex Numbers Using Structure
#include<iostream>
using namespace std;
typedef struct coxNum{
    int realPart;
    int imgPart;
}cn;
int main(){
    cn z1,z2;
    z1.realPart=5;
    z2.realPart=6;

    z1.imgPart=4;
    z2.imgPart=3;

    cout<<"z1+z2= "<<z1.realPart+z2.realPart<<"+"<<z1.imgPart+z2.imgPart<<"i" ;
    

    
    return 0;
}