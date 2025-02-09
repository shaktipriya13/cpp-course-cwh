// C++ Program to Add Two Distances in Inch and Feet Using Structures
// 1feet=12inches

#include<iostream>
using namespace std;
struct distance{
    int feet;
    float inches;
};
int main(){
    struct distance d1,d2,d3;
    cout<<"enter first distance as [feet inches]: ";
    cin>>d1.feet>>d1.inches;
    cout<<"enter second distance as [feet inches]: ";
    cin>>d2.feet>>d2.inches;

    d3.feet=d1.feet+d2.feet;
    d3.inches=d1.inches+d2.inches;
    float d=d3.inches;
    if(d>=12){
        d3.feet+=d/12;
        d3.inches=0;
    }
    cout<<"sum of distances= "<<d3.feet<<"feet "<<d3.inches<<"inches";
    
    return 0;
}