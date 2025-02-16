// mirror tree
#include<bits/stdc++.h>

using namespace std;

int main() {

}

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

class Solution {
    public:
      void conv(Node* node) {
            if(!node) return;
            
            Node*tmp=node->left;
            node->left=node->right;
            node->right=tmp;

            conv(node->left);
            conv(node->right);
      }
      void mirror(Node* node) {
            conv(node);
      }
  };