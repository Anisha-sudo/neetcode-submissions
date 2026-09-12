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
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
         dot(root);
         return ans;
    }

    int dot(TreeNode* node){
        if(!node)return 0;
        ans=max(ans,(dot(node->left)+dot(node->right)));
        return 1+max(dot(node->left),dot(node->right));
    }
    
};
