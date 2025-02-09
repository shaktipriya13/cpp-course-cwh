// another example, hw
#include<iostream>
using namespace std;
class Animal{
    private:
    char vorous; //o,h,c
    public:
    int lftime;
    int age;
        void setData(int a,char v);
        void showData(){
            cout<<"age of animal "<<age<<endl;
            cout<<"nature of animal "<<vorous<<endl;
            cout<<"lifteime of animal "<<lftime<<endl;
        }
};

void Animal :: setData(int a,char v){
    age=a;
    vorous=v;
}
int main(){
    Animal cow;
    cow.setData(10,'h');
    cow.lftime=30;
    cow.showData();
    
    return 0;
}