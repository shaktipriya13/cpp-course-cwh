//Array of Objects Using Pointers in C++

// Array of objects can be defined as an array that’s each element is an object of the class.Through use of pointers,we can iterate through objects in the array.

#include<iostream>
using namespace std;
class Shop{
    int id;
    float price;
    public:
        void setData(int a,float b){
            id=a;
            price=b;
        }
        void getData(void){ 
            cout<<"Code of this item is: "<<id<<endl;
            cout<<"Price of this item is: "<<price<<endl;
        }
};
int main(){
    int size=3;
    // int*ptr=&size;
    //int *p = new int[34]; //this will allocate 34 memory spaces
    Shop *ptr=new Shop[size]; // shop ke 3 objects jisme store ho jaye,utni memory allocate ho jayegi
    int p;
    float q;
    Shop*ptrTemp=ptr;
    for(int i=0;i<size;i++){
        cout<<"Enter id and price of item-"<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p,q);
        // (*ptr).getData();
        ptrTemp->setData(p,q);
        ptrTemp++;
    }
    for(int i=0;i<size;i++){
        cout<<"Item number: "<<i+1<<endl;
        ptr->getData(); //arrow operator is always used on a operator
        ptr++;
    }

    
    return 0;
}