// Stickler Thief

#include<bits/stdc++.h>

using namespace std;

int main() {

}   


class Solution {
    public:
    int solve(vector<int>& a, vector<int>& dp, int i, int n) {
        if(i >= n) {
            return 0;
        }
        
        if(dp[i] != -1) {
            return dp[i];
        }
        
        return dp[i] = max(solve(a, dp, i+2, n)+a[i], solve(a, dp, i+1, n));
    }
    
    int findMaxSum(vector<int>& a) {
        // Your code here
        int n = a.size();
        vector<int> dp(n, -1);
        return solve(a, dp, 0, n);
    }
  };
  