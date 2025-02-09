// Nesting of member functions
//Real life implementation prblm-take input from user a binary number & chk if it is in correct binary format...if yes, print its complement.
#include<iostream>
#include<string>
using namespace std;
class binary{
    private:
        string s;  //private ha
        void chk_bin();  //now this fxn can't be accessed from outside..only class methods can use it
    public:
        void read();
        void ones_compl();
        void display();
};
void binary::read(){
    cout<<"enter binary number:";
    cin>>s;
}
void binary::chk_bin(){
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format."<<endl;
            c+=1;
            break;
        }
        
    }
    if(c==0){
        cout<<"binay no. accepted"<<endl;
        
    }
}
void binary::display(){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
void binary::ones_compl(){
    chk_bin(); //private member fxn -an object method cannot call it from outside
    // nesting of class members -calling of 1 fxn inside other
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
    
    
}

int main(){
    // int n;
    // cout<<"enter no. of times to run code: ";
    // cin>>n;
    // while(n!=0){
    //     binary b1;
    //     b1.read();
    //     b1.chk_bin();
    //     b1.display();
    //     b1.ones_compl();
    //     b1.display();
    //     n--;
    // }
    binary b1;
        b1.read();
        //  b1.check()  //here binary no. will be checked inside without being prompted by the user
        // checking of binary no. is hidden from implementation details
        b1.display();
        b1.ones_compl();
        b1.display();
        
    return 0;
}


// more correct code:
#include<iostream>
#include<string>
using namespace std;
class bin{
    private:
        string s;
        bool chk_bin(string s);
    public:
        void read();
        void display();
        void ones_compl();

};
bool bin::chk_bin(string s){
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0'&&s.at(i)!='1'){
            c+=1;
            break;
        }
    }
    if(c!=0){
        return false;
    }
    else{return true; };

}

void bin::read(){
    cout<<"enter binary no."<<endl;
    cin>>s;
}

void bin:: display(){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
void bin:: ones_compl(){
    if(chk_bin(s)){
        for(int i=0;i<s.length();i++){
            if(s.at(i)=='1'){
                s.at(i)='0';
            }
            else{
                s.at(i)='1';
            }
        }
        cout<<"one's complement is : "<<s<<endl;
    }
    else{
        cout<<"incorrect binary format entered";
    }
}

int main(){
    int n;
    cout<<"enter no. of times to run code: "<<endl;
    cin>>n;
    while(n--){
        bin b1;
        b1.read();
        b1.display();
        b1.ones_compl();
       
    }
    return 0;
}