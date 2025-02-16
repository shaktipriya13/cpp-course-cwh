// Kadane's Algorithm


#include<bits/stdc++.h>

using namespace std;

int main() {

}
// Given an integer array arr[]. You need to find the maximum sum of a subarray.
class Solution {
    public:
      int maxSubarraySum(vector<int> &a){
            int n=a.size();
            vector<int>dp(n);

            dp[0]=a[0];
            int maxSum=dp[0];


            for(int i=1;i<n;++i){
                dp[i]=max(a[i],a[i]+dp[i-1]);
                maxSum=max(maxSum,dp[i]);
            }
            return maxSum;
      }
  };
  
  