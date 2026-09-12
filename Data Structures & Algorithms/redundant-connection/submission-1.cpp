class Solution {
public:
        vector<int>ans;
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<vector<int>>adj(edges.size()+1);
       
        for(auto it: edges){
          vector<int>visited(edges.size()+1,0);
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
            if( dfs(it[0],-1,adj,visited)){
                ans.push_back(it[0]);
                ans.push_back(it[1]);
                return ans;
            }
        }
     return ans;
    }
    bool dfs (int node,int parent,vector<vector<int>>&adj,vector<int>&visited){
       
          visited[node]=-1;
     for(auto it:adj[node]){
        
        if(parent==it)continue;
        if(visited[it]==-1){
            return true;
        }
        if (dfs(it,node,adj,visited)){
            return true;}
        }
          return false;
    }

   
    
    

    
};
