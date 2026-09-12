class Solution {
public:
 vector<vector<int>>ans;
    vector<vector<int>> combine(int n, int k) {
       
        vector<int>temp;
        dfs(1,temp,k,n);
        return ans;
    }

    void dfs(int i,vector<int>&temp,int k,int n){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if(i>n)return;
        temp.push_back(i);
        dfs(i+1,temp,k,n);
        temp.pop_back();
        dfs(i+1,temp,k,n);
    }
};