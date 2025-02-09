// Making array of Objects

#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary=122;
            cout<<"Enter ID of employe: ";
            cin>>id;
        }
        void getId(void){
            cout<<"Id of this employee is : "<<id;
        }
};

int main(){
    // employee harry,shruti,lovish,rohan;
    // harry.setId();
    // harry.getId();
    
    // if no. of employees increases to 100 or 1000 then it is ideal to create an array of a company and store values in it

    employee fb[4];  //this creates an array of datatype Employee
    // creating class means creates a custom datatype
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
        // cout<<"\nsalary: "<<fb[i].salary;  ....will give error as salary is private member of class
        // only a member fxn can access it 
    }
    
    return 0;
}