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
   map<int,int>inmap;
   int idx=0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         if(preorder.size()==0 || inorder.size()==0)return nullptr;  
        for(int i=0;i<inorder.size();i++){
            inmap[inorder[i]]=i;
        }
        return dfs(preorder,0,inorder.size()-1);
    }

    TreeNode* dfs(vector<int>& preorder,int inS,int inE){
         if(inS>inE) return nullptr;    
        TreeNode* node= new TreeNode(preorder[idx]);
         int nodeIndex=inmap[preorder[idx++]];
        node->left=dfs(preorder,inS,nodeIndex-1);
        node->right=dfs(preorder,nodeIndex+1,inE);
        return node;
    }
};
