// Connect Nodes of Levels
#include<bits/stdc++.h>

using namespace std;

int main() {

}
// we will be doing level order traversl ,so bfs will be used
struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; 

// gfg
class Solution{
    public:
    void connect(Node *root)
    {
         if(!root) return;

         queue<Node*>q;
         q.push(root);

         while (!q.empty())
         {
              int n=q.size();
              Node*prev=nullptr;
              for(int i=1;i<=n;++i){
                   Node*cur=q.front();
                   if(prev) {
                        prev->nextRight=cur;
                   }
                   prev=cur;
                   if(cur->left) q.push(cur->left);
                   if(cur->right) q.push(cur->right);

                   q.pop();
                   if(i==n){
                        prev->nextRight=nullptr;
                   }
              }
         }
         return;
    }    
};

// leetcode
class Solution {
    public:
      Node* connect(Node* root){
            if (!root) return nullptr;  // Edge case: Empty tree
             
            queue<Node*>q;
            q.push(root);

            while(!q.empty()){
                int n=q.size();
                Node*prev=NULL;

                for(int i=1;i<=n;++i){
                    Node*cur=q.front();
                    q.pop();

                    if(prev){
                        prev->nextRight=cur;
                    }
                    prev=cur;

                    if(cur->left) q.push(cur->left);
                    if(cur->right) q.push(cur->right);

                    if(i==n){
                        cur->nextRight=nullptr;
                    }
                }
            }
            return root;
      }
  };
// initially there will be nothing in the previous node