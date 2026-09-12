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
    int goodNodes(TreeNode* root) {
        if(!root)return ans;
        goodnodes(root,root->val);
        return ans;
    }

    void goodnodes(TreeNode* root,int val){
        if(!root)return ;
          if(root->val>=val){ 
           ans=ans+1;
           goodnodes(root->left,root->val);
           goodnodes(root->right,root->val);
           }else if(root->val<val){
           goodnodes(root->left,val);
           goodnodes(root->right,val);
           }
           
    }
};
