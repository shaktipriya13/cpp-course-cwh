// Given two strings A and B, find if A is a subsequence of B.

//A subsequence does not need to occur consecutively but should retain the same relative order of characters as in the original string.

bool isSubSequence(string A, string B) {
    int m = A.size();
    int n = B.size();

    int i = 0, j = 0;

    while (i < m && j < n) {
        if (A[i] == B[j]) {
            i++; // Move pointer in string A
        }
        j++; // Always move pointer in string B
    }

    return (i == m); // Return true if all characters of A were found in B

    //In the context of the function isSubSequence(string A, string B), the expression return (i == m); is used to determine whether string A is a subsequence of string B. Let's break down what (i == m) means:

// i: It represents the position/index within string A.
// m: It represents the length of string A.
}
