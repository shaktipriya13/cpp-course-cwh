// If you want to execute the same code for multiple values, you can place those values sequentially without any intervening code statements between them. However, assigning multiple separate values to a single case label directly isn't allowed in C++.

// #include<iostream>
// using namespace std;

// int main(){

//     int num = 3;

// switch(num) {
//     case 1:
//         // Code for case 1
//         break;
//     case 2:
//     case 3:
//         // Code for case 2 and case 3, because they share the same code
//         break;
//     default:
//         // Default code
//         break;
// }

//     return 0;
// }

// CODE:
#include<iostream>
using namespace std;

int main(){
    int day;
    cout<<"enter day:"<<endl;
    cin>>day;
    switch(day){
        case 1:
        cout<<"IT's monday"<<endl;
        break;
        case 2:
        cout<<"IT's Tuesday"<<endl;
        break;
        case 3:
        cout<<"IT's Wednesday"<<endl;
        break;
        case 4:
        cout<<"IT's Thursday"<<endl;
        break;
        case 5:
        
        case 6:
        cout<<"IT's Saturday"<<endl;
        break;
        default:
        break;
    }
    return 0;
}




