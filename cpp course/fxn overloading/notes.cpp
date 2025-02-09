Functions that cannot be overloaded in C++:
1) Function declarations that differ only in the return type. 
` int fun(int x, int y);
         void fun(int x, int y); 
2) Functions that differ only by static keyword in return type

    int fun(int x, int y);
         static int fun(int x, int y);
reason: functions that differ only by the static keyword in their return type are considered identical in terms of overloading.

3)Parameter declarations that differ only in a pointer * versus an array []
        int fun(int *ptr, int n);
            int fun(int ptr[], int n); 
reason: because arrays decay into pointers when passed to functions, resulting in ambiguity 

4) Two parameter declarations that differ only in their default arguments

    int fun( int x, int y); 
    int fun( int x, int y = 10); 

5) Parameter declarations that differ only in the presence or absence of const and/or volatile are equivalent, fxn overloading is not allowed


int f ( int x) {
    return x+10;
}
 
int f ( const int x) {
    return x+10;
}

//note:The overloaded functions must have different parameter lists in terms of the number of parameters, the type of parameters, or the order of parameters. 