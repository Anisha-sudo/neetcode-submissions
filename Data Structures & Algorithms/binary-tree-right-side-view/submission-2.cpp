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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>ans;
        if(!root)return ans;
        q.push(root);

        while(q.size()>0){
          
          int size=q.size();
          

          for(int i=0;i<size;i++){
          TreeNode* tmp=q.front();
              if(i==0){
              ans.push_back(tmp->val);
            }
            q.pop();
            if(tmp->right){
            q.push(tmp->right);}
            if(tmp->left){q.push(tmp->left);}

          }

        }return ans;
    }
};
