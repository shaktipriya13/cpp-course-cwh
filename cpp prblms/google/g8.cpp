// Count BST nodes that lie in a given range
#include<bits/stdc++.h>

using namespace std;

int main() {

}

class Node {
    public:
      int data;
      Node* left;
      Node* right;
  
      // Constructor to initialize a new node
      Node(int val) {
          data = val;
          left = NULL;
          right = NULL;
      }
  };
  
  class Solution {
    public:
        int getCount(Node *root, int l, int h) {
            if (!root) return 0;
    
            int cnt = 0;
            if (root->data >= l && root->data <= h) cnt++;
    
            return cnt + getCount(root->left, l, h) + getCount(root->right, l, h);
        }
    };
        