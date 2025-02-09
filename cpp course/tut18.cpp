// recursions
#include<iostream>
using namespace std;
int fac(int n){
    if(n<=1){
        // if(n<2)
        return 1;
    }
    else return n*fac(n-1);
}
int fib(int n){
    if(n<2){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // cout<<fac(n)<<endl;
    cout<<fib(n)<<endl;
    
    return 0;
}
// fibonacci: 1,1,2,3,5,8...
// 1,1 are already given
// in fibonacci index starts at 0

// NOTE:
// in recursions,stacks are used to store data.
recursions are not always good to use as they may lead to big overheads...as the same fxn is called many times....eg in fibonacci series iterative approach will work better than recursions

// ques to do: fibonacci using iterative approach
void fibo(int n){
    int a=0,b=1,ret=0;
    
    for(int i=0;i<=n;i++){
        if(i==0){
            cout<<"1 ";
            continue;
        }
        ret=a+b;
        a=b;
        b=ret;
        cout<<ret<<" ";
    }
}

RECURSIONS VS ITERATIVE APPROACH:
Usage of either of these techniques is a trade-off between time complexity and size of code. If time complexity is the point of focus, and the number of recursive calls would be large, it is better to use iteration. However, if time complexity is not an issue and shortness of code is, recursion would be the way to go.
Recursion-short code,long time
Iteration-long code,short time
Recursion: Recursion involves calling the same function again, and hence, has a very small length of code. However, as we saw in the analysis, the "time complexity of recursion can get to be exponential" when there are a considerable number of recursive calls. Hence, usage of recursion is advantageous in shorter code, but higher time complexity.

//in some cases, Shorter code might be more memory-efficient during compilation:
 
Iteration: Iteration is the repetition of a block of code. This involves a larger size of code, but the time complexity is generally lesser than it is for recursion. 
