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
int ans;
    int kthSmallest(TreeNode* root, int k) {
        ksmall(root,&k);
        return ans;
    }

    void ksmall(TreeNode* node,int* k){
        if(!node)return;
        ksmall(node->left,k);
        (*k)--;
        
       if(*k==0) {ans=node->val;
        return;
       }
       if(*k>0){
            ksmall(node->right,k);
        }
    }
};
