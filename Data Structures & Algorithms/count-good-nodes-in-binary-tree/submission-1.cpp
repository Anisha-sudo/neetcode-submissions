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
    int count=0;
    int goodNodes(TreeNode* root) {
        if(!root)return count;
      goodNode(root,root->val);
     return count;
    }

    void goodNode(TreeNode* node,int val){
        if(!node)return;

        if(node->val>=val){
            count++;

        }
        goodNode(node->left,max(val,node->val));
        goodNode(node->right,max(val,node->val));
     }
};
