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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode * root = new TreeNode(preorder[0]);
        return makeTree(preorder,inorder);

}
    TreeNode* makeTree(vector<int>&preorder,vector<int>&inorder){
      if(preorder.size()==0 || inorder.size()==0)return nullptr;
      TreeNode* node= new TreeNode(preorder[0]);
      auto inindex= find(inorder.begin(),inorder.end(),preorder[0])-inorder.begin();
      vector<int>leftIn(inorder.begin(),inorder.begin()+inindex);
      vector<int>rightIn(inorder.begin()+inindex+1,inorder.end());
      vector<int>leftPre(preorder.begin()+1,preorder.begin()+inindex+1);
      vector<int>rightPre(preorder.begin()+inindex+1,preorder.end());
      node->left= makeTree(leftPre,leftIn);
      node->right=makeTree(rightPre,rightIn);

        return node;
      

    }
    
};
