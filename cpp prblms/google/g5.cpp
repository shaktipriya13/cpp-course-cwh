// Duplicate Subtree


#include<bits/stdc++.h>

using namespace std;

int main() {

}

struct Node
{
  char data;
  struct Node* left;
  struct Node* right;
};


class Solution {
    public:
      string solve(Node* root,unordered_map<string,int> &mp){
          if(root == NULL) return "N";


          //why following condition is needed 
        //   for i/p :  3 1 1 11 1 1 11
        // solve(11) → "11,N,N"
        // so this string 11NN will be counted twice which is not a valid substring so we neglect the N values
          if(root->left == NULL && root->right == NULL){
              string s = to_string(root->data);
              return s;
          }


          string s = to_string(root->data) + "," + solve(root->left,mp) + "," + solve(root->right,mp);
          mp[s]++;
          return s;
      }
      int dupSub(Node *root) {
           unordered_map<string,int> mp;
           solve(root,mp);
           for(auto i:mp){
               if(i.second > 1) return 1;
           }
           return 0;
      }
  };

// use a map to store the subtrees in form of substrings in order to mark them visited
//root-lft - rgt : order in which subtree is stored, don't skip the null child
// we will use recursion to visit all subtrees

// string s= root->val + ',' + solve(root->left) + ',' + solve(root->right)

//if mp[s]==1 return 1;
// else mp[s]++;
// we are visiting all nodes and converting to string,so O(n^2) is time complx in worst case