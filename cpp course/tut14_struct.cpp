#include <iostream>
using namespace std;
// struct employee{
//     int age;
//     char favChar;
//     float salary;
// };

// SHORTCUT IS DONE USING TYPEDEF:
typedef struct employee
{

    // typedef in C++ is used to create an alias or a new name for existing types. It's a way to define a new name for an existing data type, making the code more readable and allowing for easier modification of types.
    int age;
    char favChar;
    float salary;
} ep;

// or use typedef as:
typedef struct employee ep; //written alag se in top and after this u can write definition

// now instead of writing struct employee, u can just write ep:
ep Eva;

int main()
{
    struct employee shivam;
    ep rani;
    // it means that datatype of Eva is ep which is struct employee
    shivam.age = 18;
    shivam.salary = 18000;
    shivam.favChar = 'i';
    cout << "value is " << shivam.age << endl;
    cout << "value is " << shivam.favChar << endl;
    cout << "value is " << shivam.salary << endl;

    struct employee venu;
    struct employee omi;

    return 0;
}

//Declaring structure variables can be done in any of the following ways(by referring to the previous example) :

1.
struct student
{char id_num[5];
char name[10];
char gender;
int age;
} studno_1, studno_2;

2. 
struct
{ // no tag
char id_num[5];
char name[10];
char gender;
int age;
} studno_1, studno_2;

3. 
struct student
{
char id_num[5];
char name[10];
char gender;
int age;
};
//note: structures also have both virtual fxns and constructors