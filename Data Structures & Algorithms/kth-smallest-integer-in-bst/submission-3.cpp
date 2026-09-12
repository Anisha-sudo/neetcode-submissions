/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
   int ans=0;
     int kthSmallest(TreeNode* root, int k) {
      if(!root) return 0;
      kthSmall(root,&k);
      return ans;
       
    }

    void kthSmall(TreeNode* node,int* k){
      if(!node)return;
     kthSmall(node->left,k);
      (*k)--;
      if(*k==0){ans=node->val;return;}
      kthSmall(node->right,k);
    }
};