class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<int>>adj(numCourses);
        for(auto it:prerequisites){
            adj[it[0]].push_back(it[1]);
        }
        vector<bool>res;
        for(auto it: queries){
            res.push_back(dfs(it[0],it[1],adj));
        }
        return res;
    }

    bool dfs(int start,int end,vector<vector<int>>&adj){
          
           for(auto it:adj[start]){
            if(it==end)return true;
            if(dfs(it,end,adj))return true;
           }
           return false;
    }
};