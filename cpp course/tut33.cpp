/*Dynamic Initialization of Objects Using Constructors

The dynamic initialization of the object means that the object is initialized at the runtime.  Dynamic initialization of the object using a constructor is beneficial when the data is of different formats. */

//this is helpful during the case of constructor overloading

//dynamic means program banane ke bad jab user ne input diya ,fir pta chalega ki konsa constructor run hoga

#include<iostream>
using namespace std;
//assuming agar interest percent me hoga toh wo integer value hoga

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    
    public:
    //constructor declarations
        BankDeposit(){} //a class also needs a blank constructor....a blank constructor is important to give so that even if you don't pass values to the the object , then also the object is ready and initialized with garbage values
        BankDeposit(int p,int y,float r);  //r can be a value like 0.04
        BankDeposit(int p,int y,int r);   //r can be a value like 14
        void show();

};
BankDeposit::BankDeposit(int p,int y,float r){
    principal=p;
    years=y;
    interestRate=r;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue=(1+r)*returnValue;
    }
}
BankDeposit::BankDeposit(int p,int y,int r){
    principal=p;
    years=y;
    interestRate=float(r)/100;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue=(1+interestRate)*returnValue;
    }
}
void BankDeposit::show(){
    cout<<"Principal amount was: "<<principal<<endl
    <<"\nReturn value after "<<years
    <<"years is :"<<returnValue<<endl;
}
int main(){
    BankDeposit bd1,bd2,bd3;
    
    
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of p,y and r(in float)"<<endl;
    cin>>p>>y>>r;      //100 1 0.04 ,o/p=104
    //or declare objects as:
    BankDeposit bd4=BankDeposit(p,y,r);
    bd4.show();

    bd1=BankDeposit(p,y,r);
    bd1.show();


    cout<<"Enter the value of p,y and R(in %)"<<endl;
    cin>>p>>y>>R;              //100 1 4% ,o/p=104
    bd2=BankDeposit(p,y,R);
    bd2.show();

    //according to the type of value passed in constructor in variable interestRate,compiler choses the constructor accordingly
    
    return 0;
}