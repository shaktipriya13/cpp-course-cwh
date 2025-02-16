
// Maximum sum of Non-adjacent nodes

#include<bits/stdc++.h>

using namespace std;

int main() {

}


struct Node
{
    int data;
    Node* left;
    Node* right;
};

// M1:
//following mthd gives TLE: so solve using memoization where we store repeated values 
class Solution{
    public:
      int solve(Node *root){
            if(!root) return 0;
            int including=0,excluding=0;

            including+=(root->data);
            if(root->left){
                including+=solve(root->left->left);
                including+=solve(root->left->right);
            }
            if(root->right){
                including+=solve(root->right->left);
                including+=solve(root->right->right);
            }
            excluding+=solve(root->left);
            excluding+=solve(root->right);
            return max(including,excluding);
      }
      int getMaxSum(Node *root) 
      {
            return solve(root);
      }
  };

// M2:
// memoization : just store the values in a map
class Solution{
    public:
      int solve(Node *root,unordered_map<Node*,int>&ump){
            if(!root) return 0;
            if(ump[root]) return ump[root];
            int including=0,excluding=0;

            including+=root->data;
            if(root->left){
                including+=solve(root->left->left,ump);
                including+=solve(root->left->right,ump);
            }
            if(root->right){
                including+=solve(root->right->left,ump);
                including+=solve(root->right->right,ump);
            }
            excluding+=solve(root->left,ump);
            excluding+=solve(root->right,ump);
            return ump[root]=max(including,excluding);
      }
      int getMaxSum(Node *root) 
      {     
            unordered_map<Node*,int>ump;
            return solve(root,ump);
      }
  };
  
// jab bhi recursion likho just write for root node only,baki sab nodes ke lie automatic true ho jayega