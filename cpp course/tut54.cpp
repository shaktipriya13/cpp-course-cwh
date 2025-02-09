//Polymorphism: poly means many & morphism means form
//Polymorphism means multiple forms of one thing
#include<iostream>
using namespace std;

int main(){

    //Polymorphism
    //- one name multiple forms
    //- eg. fxn overloading,operator overloading
    //- eg. virtual fxns
    return 0;
}
/*
There are two types of polymorphism:
~Compile-Time Polymorphism (Static Binding or Early Binding)
~Run-Time Polymorphism (Dynamic Binding or Late Binding)

**asked in interview-->in what ways u can achieve the Compile-time polymorphism?

//binding means konsa obect kis fxn ko call krega

Compile Time Polymorphism:
//compiletime mtlb compilation time hi compiler decide kr chuka hota ha ki usko konsa fxn run krna ha

In compile-time polymorphism, it is already known which function will run. Compile-time polymorphism is also called 'early binding' or 'static binding' , which means that you are already bound to the function call and you know that this function is going to run. There are two types of compile-time polymorphism:

1.Function Overloading
This is a feature that lets us create more than one function and the functions have the same names but their parameters need to be different. If function overloading is done in the program and function calls are made, the compiler already knows that which functions to execute.

2.Operator Overloading
This is a feature that lets us define operators working for some specific tasks. For example, we can overload the operator “+” and define its functionality to add two strings. Operator loading is also an example of compile-time polymorphism because the compiler already knows at the compile time which operator has to perform the task.

~Run Time Polymorphism

In the run-time polymorphism, the compiler doesn’t know already what will happen at compile time. Run time polymorphism is also called late binding. The run time polymorphism is considered slow because function calls are decided at run time. Run time polymorphism can be achieved from the virtual function.
--->in run time polymorhism, the compiler postpones the decision of which fxn will be called-->this difffers the linking of the fxn call
--->not even compile, but when u execute the program,then u get to know

3.Virtual Function
A function that is in the parent class but redefined in the child class is called a virtual function. “virtual” keyword is used to declare a virtual function.

-->in run time polymor. pointer ke type ko dekhkar konsa fxn run hoga decide hota ha
*/