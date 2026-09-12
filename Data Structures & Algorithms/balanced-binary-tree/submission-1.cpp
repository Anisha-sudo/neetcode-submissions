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
int ans=true;
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        ht(root);
        return ans;
     }

    int ht(TreeNode* node){
        if(!node) return 0;
        int leftHt=ht(node->left);
        int rightHt=ht(node->right);
        if(abs(leftHt-rightHt)>1){ans=false;}
        return 1+max(leftHt,rightHt);
    }
};
