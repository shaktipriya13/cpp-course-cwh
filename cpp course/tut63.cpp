/*
class is a template ...
for object, the template is class
for class, the template is template

template ke through class to ek type ka rehta ha...but it can be used for different datatypes like int, char ,float etc.  --> this increases the code reusability as we don't hv to make the same template again and again for different datatypes

templates are also called parameterized classes....bcoz in templates also we pass, ki which dataype you need to use


WHY USE TEMPLATE ?
->in order to follow the DRY(do not repeat yourself) principle
-> for doing the generic programming (Generic programming is a programming paradigm that emphasizes writing code in a way that is independent of data types. )



Syntax for TEMPLATES:*/
template <class T> //T will represent now many classes
class vector{
    T* arr;                               //T can be double,float, int ,char etc.
    Public:
        vector(T* arr){         //constructor  ....a pointer is passed inside the constructor 
            //code
        }
        //& many other methods
};
// above is a template that represents many classes of different datatypes
// STL and Template gives another edge in Competetive programming



#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> myvec(ptr);   //--> ptr given in bracket to invoke its constructor
    vector<float> myvec2;
    return 0;
}
//, a template does the same thing to a class, what a class does to the objects. It parametrizes the data type hence making it easy for us to use different classes without having to write the whole thing again and again, violating the DRY rule.