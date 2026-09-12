class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
          vector<vector<int>>adj(n);
          vector<int>visited(n,0);
          for(auto it:edges){
            adj[it[0]].push_back(it[1]);
           adj[it[1]].push_back(it[0]);
          }
          bool ans=dfs(0,-1,adj,visited);
          for(auto it:visited){
            if(it!=-1)return false;
          }
          return ans;
    }

    bool dfs(int node,int parent ,vector<vector<int>>&adj,vector<int>&visited){
          
            
            visited[node]=-1;

            for(auto it:adj[node]){
                if(it==parent)continue;
              if(visited[it]==-1)return false; 
              if(!dfs(it,node,adj,visited))return false; 
            }

            return true;


    }
};
