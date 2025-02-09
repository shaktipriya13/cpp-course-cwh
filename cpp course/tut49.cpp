#include<iostream>
using namespace std;
/*
The initialization list in constructors is another concept of initializing the data members of the class. The syntax of the initialization list in constructors is shown below.


//we use initialization section when the constructor body is very complex

Syntax for initialization list in constructor:
constructor(argument-list) :initialization section(used to assign initial values)
{
    assignment +other code;
    -u can call here utility fxns(means fxns like setData and getdata)
}

class Test{
    int a;
    int b;
    public:
        Test(int i,int j):a(i),b(j){constructor-body}
        
};
*/
class Test{
    int a;
    int b;
    public:
        
        // Test(int i,int j):a(i),b(j){
        // Test(int i,int j):a(j),b(j){
        // Test(int i,int j):a(i),b(i+j){
        // Test(int i,int j):a(i),b(i*j){
        // Test(int i,int j):a(i),b(2*j){
        // Test(int i,int j):a(i),b(a+j){
        // Test(int i,int j):a(i*j),b(a*j){ //important-gives correct answer bcoz a has already assigned value(i*j)


            //Test(int i,int j):b(j),a(i){ //important-will not give error bcoz here independent allocation is done to a and b
            //Test(int i,int j):b(j),a(i+b){ //important-will give garbage value in a..step-by step follow kro..first a has been declared in declaration statement , so a has to be assigned value first....  so it will give error,,,,
            
            /*
            reason: a was declared before b in private section
            jo chiz pehle declare hoti ha wo pehle initialize hogi
            */
        // Test(int i,int j):a(i+b),b(j){//garbage value
        Test(int i,int j):a(i){
            b=j; //we can also initialize the variables inside the constructor
        Test(int i,int j){
            a=i;
            b=j; //we can also initialize the variables inside the constructor
            cout<<"Constructor executed!"<<endl;
            cout<<"Value of a is: "<<a<<endl;
            cout<<"Value of b is: "<<b<<endl;
        }
};
int main(){
    Test t(9,8);

    return 0;
}