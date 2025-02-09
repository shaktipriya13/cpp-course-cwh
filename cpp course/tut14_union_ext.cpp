// note:
// Unlike fundamental types like int and float, string in C++ is a complex type that manages its memory dynamically. Using a string inside a union without proper memory allocation and management can lead to unexpected behavior or errors.
// so don't use string name; inside union.

#include<iostream>
using namespace std;
union money{
    float pounds;
    char car;
    int rice;
};
int main(){
    union money m1;
    m1.rice=34;
    cout<<m1.rice<<endl;
    m1.car='y';
    cout<<m1.rice<<endl;
    // this line will now give garbage value, bcoz its value has been overwritten by m1.car as union can store only one value , as memory is shared b/w all.
    cout<<m1.car<<endl;
    
    return 0;
}