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

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
      string ans="";
      TreeNode* curr=root;
      serial(curr,ans);
      cout<<ans;
      return ans;
    }

    void serial(TreeNode* node,string& ans){
         if(!node){
            ans=ans+"N"+",";
            return;
         }
        ans=ans+to_string(node->val)+",";
        serial(node->left,ans);
        serial(node->right,ans);
     }
    

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int idx=0;
     return solve(data,idx);
    }

    TreeNode* solve(string data,int& index){
        if(index>=data.length())return nullptr;
        if(data[index]=='N'){
            index=index+2;return nullptr;
            }

        if( data[index]==','){
         index++;
        }
         int var=0;
        while(index<data.size() and data[index]!=','){
            var=10*var + (data[index]-'0');
            index++;
        }
        index++;
        TreeNode* node=new TreeNode(var);
        node->left=solve(data,index);
        node->right=solve(data,index);
        return node;
    }
};
