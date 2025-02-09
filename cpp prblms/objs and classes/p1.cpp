#include<iostream>
using namespace std;
 
class Test
{
    static int x;
    int *ptr;
    int y;
};
 
int main()
{
    
    cout << sizeof(Test);
    
}
// output is 8
// reason:The total size of the Test class might not be 12 bytes due to padding and alignment requirements. Compilers often add padding to ensure that each member of the class aligns properly in memory, which can lead to a larger size than the sum of individual member sizes.