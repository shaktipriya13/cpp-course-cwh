// Static Variables in C
/*
Static variables have the property of preserving their value even after they are out of their scope! Hence, a static variable preserves its previous value in its previous scope and is not initialized again in the new scope. 

Following are some interesting facts about static variables in C:

1) A static int variable remains in memory while the program is running. A normal or auto variable is destroyed when a function call where the variable was declared is over. 
For example, we can use static int to count the number of times a function is called, but an auto variable can’t be used for this purpose.


3) Static variables (like global variables) are initialized as 0 if not initialized explicitly. For example in the below program, the value of x is printed as 0, while the value of y is something garbage


*/
// C program to illustrate the default value of static
// variables
#include <stdio.h>

int main()
{
	static int x;
	int y;
	printf("%d \n%d", x, y);
}


/*
-Static global variables and functions are also possible in C/C++
*/