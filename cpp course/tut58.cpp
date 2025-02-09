/*
Pure Virtual Functions in C++
Pure virtual function is a function that doesn’t perform any operation and the function is declared by assigning the value 0 to it. Pure virtual functions are declared in abstract classes.


Abstract Base Class in C++
Abstract base class is a class that has at least one pure virtual function in its body. The classes which are inheriting the base class must need to override the virtual function of the abstract class otherwise compiler will throw an error.

an instance of an abstract class cannot be created buttttttt........We can have pointers or references of abstract classes.
*/


//pure virtual fxn--->ek aisa virtual fxn jiska nya version apko derived class me banana hi pade...usko ovveride krna compulsory ha
//pure virtual fxns are used to make abstract base class
//an abstract class is a class which has atleast 1 pure virtual fxn

//an abstract base class cannot be used to create objects...it is designed so that it can be inherited onto new classes...those new classes can be then used to create new objects

//NOTE::::If we don't override the pure virtual function in derived class, then derived class also becomes abstract class.

#include<iostream>
#include<cstring>
using namespace std;
class CWH{  //this base class is both for video and text tutorials
    protected:
        string title;  //video_title
        float rating;
    public:
        CWH(string s, float r){  //constructor  
            title=s;
            rating=r;
        }
        virtual void display()=0; //called do-nothing fxn,or pure virtual fxn
};
class CWHVideo:public CWH{
    int videoLength;
    public:
        CWHVideo(string s,float r,int vl):CWH(s,r){
            videoLength=vl;
        }
        void display(){
            cout<<"Title of this video is: "<<title<<endl;
            cout<<"Rating: "<<rating<<endl;
            cout<<"and, the  length of this video is :"<<videoLength<<" minutes."<<endl;
        }//if you uncomment this display fxn of derived class ,then it will show error bcoz the display fxn is a pure virtual fxn.
};
class CWHText:public CWH{
    int words;
    public:
        CWHText(string s, float r, int wc):CWH(s,r){
            words=wc;
        } //wc=wordcount
        void display(){
            cout<<"This is an amazing text tutorial with title :"<<title<<endl;
            cout<<"Rating of this text tutorial is: "<<rating<<endl;
            cout<<"No. of words in this tutorial is: "<<words<<endl;
        }
};
int main(){
    
    
    //for code with Harry video
    CWHVideo djVideo("Django",8.9,56);
    djVideo.display();
    
    //for code with Harry text
    CWHText djText("Django text",5.6,400);
    djText.display();

    //making 2 pointers
    cout<<endl<<"pointer statements started"<<endl;
    CWH* tuts[2];
    tuts[0]= &djVideo;  //pointer tuts[0] will store the address of object djVideo
    tuts[1]= &djText;
    tuts[0]->display();
    tuts[1]->display();
    //don't use arrow operator with dereference operator


    return 0;
}

