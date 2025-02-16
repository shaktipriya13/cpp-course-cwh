// 
// Maximum Product Subarray

#include<bits/stdc++.h>

using namespace std;

int main() {

}

// Multiplying negative numbers can flip the sign, so we need to track both maximum and minimum products at every step.
// as the minm value in negative is the largest value
class Solution
{
public:
     // Function to find maximum product subarray
     int maxProduct(vector<int> &nums)
     {
          // Your Code Here
          int res = *max_element(nums.begin(), nums.end());
          int curMin = 1, curMax = 1;

          for (int n : nums)
          {
               if (n == 0)
               {
                    curMin = 1, curMax = 1;
                    continue;
               }

               int temp = curMax * n;
               curMax = max({n * curMax, n * curMin, n});
               curMin = min({temp, n * curMin, n});
               res = max(res, curMax);
          }

          return res;
     }
};

// alongwith the max product subarray we also need to keep track of the minm
// as u get a 0 put the max and minm  as 1

/*
Is this Dynamic Programming (DP)?
Yes, this approach follows a Dynamic Programming (DP) pattern because:

We are breaking the problem into subproblems: at each step, we calculate the maximum and minimum product ending at that index.
We are using previously computed results (current curMax and curMin) to compute the result for the next step.
However, this is not classical DP with a DP table, but a "Kadane's-like approach" with constant space optimization.

*/