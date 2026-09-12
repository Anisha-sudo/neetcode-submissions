class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        int ans=0;
        vector<int>visited(n,0);
        vector<vector<int>>adj(n);

        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        for(int i=0;i<n;i++){
           if(visited[i]!=-1){
            ans++;
             dfs(i,i,adj,visited);
           } 
        }
        return ans;
    }

    void dfs(int node,int parent,vector<vector<int>>&adj,vector<int>& visited){
        visited[node]=-1;

        for(auto it :adj[node]){
            if(visited[it]!=-1){
                dfs(it,node,adj,visited);
            }
        }
    }
};
