//ques:
// Write a program to find the sum of the given series 1+2+3+ . . . . . .(N terms)
// Your Task:
// Complete the function seriesSum() which takes single integer n, as input parameters and returns an integer denoting the answer. You don't need to print the answer or take inputs.

// Expected Time Complexity: O(1)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= N <= 10^5



//User function template for C++
class Solution{
public:
	// function to return sum of  1, 2, ... n
	long long seriesSum(int n) {
	    // code here
	    
	    
	    
	    
	    return (long(n)*long(n+1))/2;
	}
};

// LOGIC:
// * if 'n' is a very large number, there might be a possibility of overflow in the result. The result of the multiplication might exceed the maximum value that can be represented by the 'long long' data type, causing unexpected behavior or incorrect results.

// To handle potential overflow, you might consider using a larger data type (like 'unsigned long long' if available) or implementing a different algorithm to compute the sum without the risk of overflow for very large 'n'.


// *The (long) before the variable 'n' is casting 'n' to a long before performing the multiplication. It's a way to ensure that the result of the multiplication is stored as a long to handle larger values and prevent overflow issues, especially when dealing with big 'n' values.


Note:
The notation ( O(1) ) refers to constant time complexity. When an algorithm or a function has a time complexity of \( O(1) \), it means that the time it takes to execute that algorithm or function doesn't depend on the size of the input.

In the context of the problem statement, when it mentions "Expected Time Complexity: ( O(1) )", it's specifying that the solution is expected to have constant time complexity, meaning it should execute in roughly the same amount of time regardless of the input size. In this case, the algorithm to compute the sum of integers from 1 to 'n' should execute efficiently and quickly, irrespective of the value of 'n'. The provided code, which utilizes a formula to calculate the sum, meets this requirement as it doesn't depend on the value of 'n' for its execution time.

Regarding "Expected Auxiliary Space: ( O(1) )", it refers to the extra space or memory that the algorithm or function uses and also doesn't depend on the input size. When the auxiliary space is \( O(1) \), it means that the algorithm uses a fixed and constant amount of extra space, regardless of the input size. The provided code to compute the sum of integers meets this requirement as well because it doesn't utilize additional space proportional to the input size 'n' and only returns the result without storing any large data structures.