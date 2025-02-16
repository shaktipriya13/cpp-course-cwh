// Root to leaf paths sum

#include<bits/stdc++.h>

using namespace std;

int main() {

}

struct Node
 {
     int data;
     Node* left, *right;
}; 

class Solution {
    public:

        // if u pass cursum by refernce it will cause error bcoz: Your DFS function does not reset cursum when moving back up the recursion tree. This causes incorrect calculations when returning from recursion.
      int dfs(Node* root, int currSum) {
          if (!root) return 0; // Base case: If the node is NULL, return 0.
  
          currSum = currSum * 10 + root->data; // Update current number.
  
          if (!root->left && !root->right) 
              return currSum; // If it's a leaf, return the number formed.
  
          // Recursively calculate sum for left and right subtrees.
          return dfs(root->left, currSum) + dfs(root->right, currSum);
      }
  
      int sumNumbers(Node* root) {
          return dfs(root, 0); // Start DFS with an initial sum of 0.
      }
  };
  