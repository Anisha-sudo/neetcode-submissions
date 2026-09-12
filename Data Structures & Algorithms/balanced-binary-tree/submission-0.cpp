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
       isB(root);return ans;
      
    }

    int isB(TreeNode* node){
        if(!node)return 0;
        int leftHt=isB(node->left);
        int rightHt=isB(node->right);
        if((abs((leftHt-rightHt)))>1){
            ans=false;
        }
        return 1+max(leftHt,rightHt);
    }
};
