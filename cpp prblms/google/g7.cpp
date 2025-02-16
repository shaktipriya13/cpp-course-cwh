#include <bits/stdc++.h>

using namespace std;

int main()
{
}

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution
{
public:
    int solve(Node *root,int ans){
        //edge case
        if(!root) return 0;

        int l=solve(root->left,ans);
        int r=solve(root->right,ans);

        //now we have 3 cases:
        int path_niche_hi_mil_gaya=l+r+root->data;

        int koi_ek_acha=max(l,r)+root->data;

        int koi_nhi_acha_except_root=root->data;

        ans=max({ans,path_niche_hi_mil_gaya,koi_ek_acha,koi_nhi_acha_except_root});

        return max(koi_ek_acha,koi_nhi_acha_except_root);
    }
    int findMaxSum(Node *root)
    {
        int ans=INT_MIN;
        solve(root,ans); //will update the ans
        return ans;
    }
};

// there can be following cases:
//case 1: we got a good value from both lft and rgt , then take lft+rgt+root->val: here the path converges from lft to rgt so we cannot return value here
//case 2:  1 of the values of lft/rgt is negative,so max(l,r)+root->val,, here path don't converges so we can return value
//case 3:  both if lft and rgt is negative, then take only root->val, here path don't converges so we can return value

// note: niche agar converging path ban gya toh we cannot explore further above in the path

// maxsum=max(maxsum,1,2,3)
// return max(2,3)