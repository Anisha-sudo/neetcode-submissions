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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
       return  ins(root,val);
 
    }

    TreeNode* ins(TreeNode* node,int val){
        if(node==nullptr){
         return new TreeNode(val);
        }
        if(node->val<val){
          node->right=ins(node->right,val);
        }
        else if(node->val>val){
          node->left=ins(node->left,val);
        }
        return node;
    }
};