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
    TreeNode* invertTree(TreeNode* root) {
        invertT(root);
        return root;
    }

    void invertT(TreeNode* node){
        if(!node)return;
        invertT(node->left);
        invertT(node->right);
        TreeNode* temp;
        temp=node->left;
        node->left=node->right;
        node->right=temp;
    }
};
