#include<bits/stdc++.h>

using namespace std;

int main() {

}
// Given a Singly Linked List which has data members sorted in ascending order. Construct a Balanced Binary Search Tree which has same data members as the given Linked List.
// Note: There might be nodes with the same value

struct LNode { //Linked List
    int data;
    struct LNode* next;
    LNode(int x){
        data = x;
        next = NULL; }
};
struct TNode {   //Tree
    int data;
    struct TNode* left;
    struct TNode* right;
    TNode(int x){
        data=x;
        left=right=NULL; }
}; 
class Solution {
    public:
      TNode *createBST(vector<int> &arr, int start, int end) {
          if(start > end) return NULL;
          
          int mid = start + (end-start + 1)/2;
          TNode *root = new TNode(arr[mid]);
          
          root->left = createBST(arr, start, mid-1);
          root->right = createBST(arr, mid+1, end);
          
          return root;
      }
      TNode *sortedListToBST(LNode *head) {
          // code here
          vector<int> arr;
          
          while(head) {
              arr.push_back(head->data);
              head = head->next;
          }
          
          return createBST(arr, 0, arr.size()-1);
      }
  };

//   0 1 2 3 4 5 6