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
  int ans=INT_MIN;
    int maxPathSum(TreeNode* root) {
        if(!root)return ans;
     maxSum(root);
     return ans;
    }

    int maxSum(TreeNode* node){
        if(!node)return 0;
        int leftSum=max(0,maxSum(node->left));
        int rightSum=max(0,maxSum(node->right));
        ans=max(ans,node->val+leftSum+rightSum);
        return node->val+max(leftSum,rightSum);
    }
};
