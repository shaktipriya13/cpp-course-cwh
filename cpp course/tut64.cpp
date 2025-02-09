/*syntax for templates:

template <typename T>
class ClassName {
public:
    T memberName;
    // Other members and methods
};

*/


#include<iostream>
using namespace std;
template <class T> //mtlb ab jaha jaha T likhenge wo variable datatype hoga, jisko mai bad me specify krungi....T will be a custom datatype
class vector{
    public:
        T *arr; //making an pointer variable ,custom array on heap
        int size;
        vector(int m){
            size=m;
            arr= new T[size]; //making an array of pointers
            //allocating memory of size to pointer variable
        }
        T dotProduct(vector &v){ //providing reference variable as argument
            T d=0;
            for(int i=0;i<size;i++){
                d+=this->arr[i]* v.arr[i];
            }
            return d;
        }
};
int main(){
    //now when use this class and make its objects...we need to specify its datatype inside the angular brackets
    //when values are given in integer
    vector <int>v1(3);
    v1.arr[0]=4; //arrow is used only with pointers , so can't be used here
    v1.arr[1]=9;
    v1.arr[2]=6;

    vector<int>v2(3);
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;

    int a=v1.dotProduct(v2);
    cout<<a<<endl;




    //when values are given in float
    vector <float>v4(3);
    v4.arr[0]=1.4; 
    v4.arr[1]=1.9;
    v4.arr[2]=6.1;

    vector<float> v5(3);
    v5.arr[0]=1.0;
    v5.arr[1]=0.3;
    v5.arr[2]=1.4;

    float p=v4.dotProduct(v5);
    cout<<p<<endl; //this will give us wrong answer by taking each values as int....to get correct ans we will use templates


    vector <double>v8(3);
    v4.arr[0]=1.4; 
    v4.arr[1]=1.9;
    v4.arr[2]=6.1;

    vector<double> v9(3);
    v5.arr[0]=1.0;
    v5.arr[1]=0.3;
    v5.arr[2]=1.4;

    return 0;
}