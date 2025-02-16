// Stock buy and sell

#include<bits/stdc++.h>

using namespace std;

int main() {

}

//in stock market the saying goes like: buy low and sell high
// time goes only in diren: our aim is to first buy and then sell

// to solve this we can use 2 pointers
// lft ptr is to buy and rgt ptr is to sell
// profit= rgt-lft | and it must not be negative

// when we are buying low then we can skip 
// we have to maintain the maxm profit


// we always want to buy low and sell high,so if we found a more low price in future then we need to shift our lft ptr to rgt ptr
class Solution {
    public:
        int stockBuySell(vector<int> &prices) {
            int n = prices.size();
            if (n == 0) return 0; // Edge case
    
            int totalProfit = 0;
    
            for (int i = 1; i < n; i++) {
                // If today's price is higher than yesterday's, add profit
                if (prices[i] > prices[i - 1]) {
                    totalProfit += (prices[i] - prices[i - 1]);
                }
            }
            return totalProfit;
        }
    };