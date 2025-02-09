// ques:User Task:
// Your task is to complete the provided function isPrime() which should return a string "Yes" if n is prime and "No" if not.

// Constraints:
// 1 ≤ n ≤ 1000

// User function Template for C++

// Complete this function
    string isPrime(int n) {
    if(n==1)
    return "No";
    for (int i = 2; i <= sqrt(n); i++) {
        // Write your logic here
        // Return "Yes" if n is prime, else return "No"
        /*n is prime only if it is not divisible by any i.
        We will not reach till n and 1 is already discarded*/
        if(n%i==0){
        return "No";
    }
    }
        return "Yes";
        
    
}

// LOGIC:
// The optimization of iterating up to the square root of 'n' (sqrt(n)) when checking for prime numbers is based on the fundamental properties of factors.

// Consider a number, for example, 36:

// Its factors occur in pairs: 1 and 36, 2 and 18, 3 and 12, 4 and 9, 6 and 6.
// Notice that after the square root (in this case, sqrt(36) = 6), the factors start repeating. This is a property applicable to all numbers.
// For any number 'n':

// If 'n' is not a prime number, it can be expressed as 'a' * 'b' = 'n', where 'a' and 'b' are factors of 'n'.
// At least one of 'a' or 'b' must be less than or equal to the square root of 'n'.
// Given that, when checking for factors or divisibility to determine if 'n' is a prime number:

// If 'n' has a factor greater than its square root, it must also have a corresponding factor that is less than the square root.
// Thus, to check for factors, it's sufficient to check up to the square root of 'n'.
// This optimization significantly reduces the number of iterations in the loop, improving the efficiency of the algorithm for larger numbers. For instance, if you're checking if 97 is prime:

// Without the square root optimization, you'd check divisibility up to 96.
// With the square root optimization, you only need to check up to 9 (sqrt(97) ≈ 9.8).
// This reduces unnecessary iterations and makes the process faster, especially for larger numbers, which is crucial in efficient prime number checking algorithms.


// Note: how 2 is checked as prime no.?
// In the given code, the check for 'n == 1' is explicitly handled before the loop. For 'n = 2', the loop condition might not strictly cover it due to the way the loop is structured (`for (int i = 2; i <= sqrt(n); i++)`).

// However, the code has a specific condition for 'n == 1' at the beginning:

// ```cpp
// if (n == 1)
//     return "No";
// ```

// Since '2' is not equal to '1', the code doesn’t enter this condition and proceeds to the loop.

// In the loop:

// - For 'n = 2', the loop condition might not be met ('2' is not less than or equal to 'sqrt(2)'), so the loop might not execute.
// - However, the code after the loop contains a default return statement `return "Yes";`. So, if the loop doesn’t run, it defaults to returning "Yes".

// Hence, '2' is correctly identified as a prime number by the code due to the specific handling of 'n == 1' and the default return statement outside the loop.