#include<iostream>
using namespace std;

int main(){
//character arrays
    char arr[10];
    cout<<"enter string:";
    cin>>arr;          //hello
    // after storing hello in arr, after 'o' the array stores in the next index 'null character(\0)'

    //null character is a character whose ASCII value is zero and is used as a terminator(jisse pta lagta ha string kha end ho rhi ha)


    cout<<arr<<endl; //while printing,jab null char. aayega toh ruk jayega print krna
    cout<<arr[2]<<endl;

    for(int  i=0;arr[i]!='\0';i++){
        cout<<arr[i];
    }

 




//------------------------------------------------------------------------------------------
// note: cin stops the execution once it encounters either space,tab(\t) or new line character(\n) .eg:
    char str[20];
    cout<<"Enter your name: ";
    cin>>str;   //1. shakti priya
                //2. shakti     priya    ...tab case
                //3. shakti,pressed enter to write priya in next line->but execution finished
    cout<<"Your name is : "<<str;  //shakti  






// ---------------------------------------------------------------------------------------




    char str[20];
    cout<<"enter ur name:";
    cin>>str;               //shakti  or sh\0kti    
    cout<<str;   //output: shakti or sh  
    //note: rest indices me garbage values will get stored
//after getting \0 execution stops


--------------------------------------------------------------------

    char arr[20]="Shakti";
    cout<<arr<<endl;  //Shakti
    arr[2]='\0';
    cout<<arr;          //Sh
    //yaha '\0' dono ek hi index me store hua ha...so execution stops
                 // sh\0kti\0  ...on getting '\0',execution don't stops


    //last wala '\0' automatic lag jata ha
    cout<<"Your name is : "<<str;   //sh      


// ------------------------------------------------------------------------------------------

//finding string length
// note: for arrays ,whenever we pass array to a fxn, we need to pass their size also....but not for char arrays


//creating fxn
int getLength(char arr[]){
    int c=0;
    for(int i=0;arr[i]!='\0';i++){
        c++;
    }  
    return c;
}


    return 0;
}
// -----------------------------------------------------------------------------------------
//code to reverse string using "in-place reversal"
/*note:
In the context of string or array reversal, an in-place reversal means that the elements of the string or array are rearranged within the same memory locations without utilizing extra memory for holding the reversed string or array.*/

//note: swap is an inbuilt fxn in cpp
#include<iostream>
using namespace std;

//the return type of the function should be void as you're modifying the array in place, not returning a new string. Also, returning an array (char[]) directly is not possible in C++
void reverse(char arr[],int n){
    int st=0,e=n-1;
    while(st<e){
        swap(arr[st++],arr[e--]);

        //st++ :This accesses the character at the position st in the array arr and then increments st by one
    }
    cout<<"reversed string: "<<arr;
}
int main(){
    char arr[]="hello";
    reverse(arr,5);
    
    return 0;
}

// -----------------------------------------------------------------------------------------
//taking i/p in character arrays
#include<iostream>
using namespace std;
void rev(char arr[],int n){
    int st=0,end=n-1;
    while(st<end){
        swap(arr[st++],arr[end--]);
        //It uses post-increment, which means the value of arr[st] is first used in the comparison, and then st is incremented by 1.
    }
}
int main(){

    char arr[200];
    cout<<"enter string:";    //jisne shyam gun gayee
    cin.getline(arr,200);
    int c=0;
    for(int i=0;arr[i]!='\0';i++){
        c++;
    }
    rev(arr,c);
    cout<<arr;     //eeyag nug mayhs ensij

    return 0;
}



//note: ASCII val of A=65, a=97,