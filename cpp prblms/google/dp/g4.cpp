// Longest Palindrome in a String

// brute: chk every substring and chk whether its palindrome or not| will take O(n^3)

// better: start from the middle and then we can keep on expanding from both lft and rgt direns | we can chk for each character and keep on expanding outwards for each character ,this wiill then hav O(n^2)


// how we chk the palindrome can really improve the time complx.

// edge case: how to chk even length palindromes?
#include<bits/stdc++.h>

using namespace std;

int main() {


}

class Solution {
    public:
        string longestPalindrome(string s) {
            string res = "";
            int len = 0; // To track max substring length
    
            for (int i = 0; i < s.size(); ++i) {
                // Odd length palindrome centered at i
                int lft = i, rgt = i;
                while (lft >= 0 && rgt < s.size() && s[lft] == s[rgt]) {
                    if ((rgt - lft + 1) > len) {
                        len = rgt - lft + 1;
                        res = s.substr(lft, len);
                    }
                    lft--; rgt++;
                }
    
                // Even length palindrome centered between i and i+1
                lft = i, rgt = i + 1;
                while (lft >= 0 && rgt < s.size() && s[lft] == s[rgt]) {
                    if ((rgt - lft + 1) > len) {
                        len = rgt - lft + 1;
                        res = s.substr(lft, len);
                    }
                    lft--; rgt++;
                }
            }
            return res;
        }
    };