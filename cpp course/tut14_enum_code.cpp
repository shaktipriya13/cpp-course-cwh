#include<iostream>
using namespace std;


int main(){
    // enum: In C++, an enum (enumeration) is a user-defined type consisting of a set of named constants, called enumerators. It provides a way to define symbolic names for integral values, which can improve code readability and maintainability.
    
    enum Meal{breakfast,lunch,dinner};
    // we can give these names  "breakfast,lunch,dinner" a number
    // jaise if you write in program a=breakfast ,toh technically apne a=0 likha ha but dekhne wale ko acha lagega "a=breakfast" likha ha
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    int m2=dinner;
    // here m2 integer is assigned value 2
    cout<<"value of m2 is : "<<m2<<endl;
    Meal m1=lunch;
    cout<<m1<<endl;
    // u can make comaprisons
    cout<<(m1==8); //prints true/false i.e. in 1/0
    
    return 0;
}

// CODE:
#include<iostream>
using namespace std;

int main(){

    enum meal{breakfast,lunch,dinner};
    meal m1=lunch;
    cout<<lunch;
    return 0;
}



// CODE EXPLANATION:
In this C++ code, an enumeration (enum) named meal is defined, which contains three constants: breakfast, lunch, and dinner. By default, enums assign integer values starting from 0 to each constant in the order they're defined, unless explicitly specified.

Code Explanation:
enum meal { breakfast, lunch, dinner };: Defines an enum named meal with three constants: breakfast (0), lunch (1), and dinner (2).

meal m1 = lunch;: Declares a variable m1 of type meal and initializes it with the value lunch.

cout << lunch;: Outputs the integer value associated with the lunch constant, which is 1.