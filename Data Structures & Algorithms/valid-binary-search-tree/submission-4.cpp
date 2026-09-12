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
    bool isValidBST(TreeNode* root) {
        return isValid(root,INT_MIN,INT_MAX);
    }

    bool isValid(TreeNode* node,int low,int high){
        if(!node)return true;
        if(node->val>=high || node->val<=low)return false;
        return isValid(node->left,low,node->val) and isValid(node->right,node->val,high);
    }
};
