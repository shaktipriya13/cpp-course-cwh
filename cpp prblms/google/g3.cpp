// lca
#include<bits/stdc++.h>

using namespace std;

int main() {

}


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 

class Solution {
    public:
      Node* lca(Node* root, int n1, int n2) {

        if(!root) return nullptr;
        if(root->data==n1||root->data==n2) return root;

        Node*lft=lca(root->left,n1,n2);
        Node*rgt=lca(root->right,n1,n2);

        if(lft && rgt) return root;
        
        return (lft==NULL)?rgt:lft;
      }
  };
