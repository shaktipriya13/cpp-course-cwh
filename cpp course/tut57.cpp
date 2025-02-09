//do after ques 4
/*
GIST: Run-time polymorphism, on the other hand, is achieved through virtual functions and is associated with inheritance. Virtual functions allow a base class pointer or reference to point to objects of derived classes, and the appropriate function to be called is determined at runtime. This is also known as late binding or dynamic binding.

instance of a class means object of class
*/
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
        virtual void display(){
            cout<<"Bogus code"<<endl;
        } //we are going to make separate fxns for display in derived classes, so not defined here
        //agar yha virtual nhi hoga toh yeh base class ke display ko hi call krega
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
        }
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
    // string title;
    // float rating,vlen;
    // int words;
    // //for code with Harry video
    // title="Django tutorial";
    // vlen=4.56;
    // rating=4.89;
    // CWHVideo djVideo(title,rating,vlen);
    // djVideo.display();
    
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


    return 0;
}

/*
Rules for virtual functions
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A virtual function in the base class might not be used.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class---->it means that if a fxn is defined virtual in base class and if the compiler don't find the same fxn in the derived class ,then it will run the virtual fxn of base class

*/