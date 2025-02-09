#include<iostream>
using namespace std;
class Shop{
    int itemID[100]; //enter only numbers in itemID
    int itemPrice[100];
    int c; // c is counter variable... will track the no. of items in an object
    public:
        void initCounter(){c=0;}
        void setValues(){
            cout<<"Enter ID of item-no."<<c+1<<":";
            cin>>itemID[c];
            cout<<endl<<"Enter price of item-no."<<c+1<<":";
            cin>>itemPrice[c];
            c++;
        }
        void displayVals(){
            for(int i=0;i<c;i++){
                cout<<"Price of Item no. "<<i+1<<" with Item ID- "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
            }
        }

};
int main(){
    //for evry object separate itemID and itemPrice arrays are maintained
    Shop Dukaan1;
    cout<<"For Dukaan 1: "<<endl;
    Dukaan1.initCounter();
    Dukaan1.setValues();
    Dukaan1.setValues();
    Dukaan1.setValues();
    Dukaan1.displayVals();

    Shop Dukaan2;
    cout<<"For Dukaan 2: "<<endl;
    Dukaan2.initCounter();
    Dukaan2.setValues();
    Dukaan2.setValues();
    Dukaan2.setValues();
    Dukaan2.displayVals();
    // yaha alag alag objects ke liye counter variables ko different memories allocate hongi
    return 0;
}
//if time permits: watch its video once