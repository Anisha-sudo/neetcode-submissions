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
             bfs(i,adj,visited);
           } 
        }
        return ans;
    }

    void bfs(int node,vector<vector<int>>&adj,vector<int>& visited){
        queue<int>q;
        q.push(node);
         visited[node]=-1;
        while(!q.empty()){
            int curr=q.front();
            q.pop();

            for(auto it : adj[curr]){
                if(visited[it]!=-1){
                    visited[it]=-1;
                    q.push(it);
                }
            }
        }
    }
};
