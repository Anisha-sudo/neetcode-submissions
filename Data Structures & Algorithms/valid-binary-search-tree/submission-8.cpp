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
        if(!root)return true;
        return isVal(root,INT_MIN,INT_MAX);
    }

    bool isVal(TreeNode* node, int leftMax,int rightMax){
        if(!node)return true;
        if(node->val<=leftMax || node->val>=rightMax)return false;
        return isVal(node->left,leftMax,node->val) and isVal(node->right,node->val,rightMax);
    }
};
