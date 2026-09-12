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

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      
          for(int i=0;i<inorder.size();i++){
          inmap[inorder[i]]=i;
          }
        return makeTree(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1);

}
    TreeNode* makeTree(vector<int>&preorder,vector<int>&inorder,int preS,int preE,int inS,int inE){
      if(preS>preE || inS>inE){
        return nullptr;
      }
      TreeNode* node = new TreeNode(preorder[preS]);
      int inIdx= inmap[preorder[preS]];
      int leftCount=inIdx-inS;
      node->left= makeTree(preorder,inorder,preS+1,preS+leftCount,inS,inIdx-1);
      node->right=makeTree(preorder,inorder,preS+leftCount+1,preE,inIdx+1,inE);

        return node;
      

    }
    
};
