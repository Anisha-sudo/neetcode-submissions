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
      map<TreeNode*, vector<int>> mp;
    public:
    int rob(TreeNode* root) {
        
        return max(robber(root,0),robber(root,1));
    }

    int robber(TreeNode* node,int pick){
        if(!node)return 0;
        if (mp.find(node) == mp.end()) {
            mp[node] = vector<int>(2, -1);
        }
        if(mp[node][pick]!=-1){
            return mp[node][pick];
        }
        if(pick==0){
          return  mp[node][pick]= max(robber(node->left,1),robber(node->left,0))+max(robber(node->right,1),robber(node->right,0));
        }
        else if(pick==1){
            return mp[node][pick]=node->val+robber(node->left,0)+robber(node->right,0);
        }
        return 0;
    }
    
};