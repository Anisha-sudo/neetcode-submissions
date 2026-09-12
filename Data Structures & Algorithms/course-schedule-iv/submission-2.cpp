class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<int>indegree(numCourses);
       vector<unordered_set<int>> adj(numCourses);
       vector<unordered_set<int>> dep(numCourses);

        for(auto it:prerequisites ){
            adj[it[0]].insert(it[1]);
            indegree[it[1]]++;
        }

        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int node=q.front();
            q.pop();
            
            for(auto it:adj[node]){
                dep[it].insert(node);
                dep[it].insert(dep[node].begin(),dep[node].end());
                indegree[it]--;
              if(indegree[it]==0){
              q.push(it);
              }
            }
        }

        vector<bool>res;
        for(auto it:queries){
            res.push_back(dep[it[1]].count(it[0]));
        }
        return res;
    }
};