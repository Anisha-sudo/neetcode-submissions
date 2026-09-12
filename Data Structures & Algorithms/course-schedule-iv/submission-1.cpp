class Solution {
public:
 unordered_map<int,unordered_set<int>>depMap;

    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<int>>adj(numCourses);

        for(auto it:prerequisites){
            adj[it[0]].push_back(it[1]);
        }
          
        for(int i=0;i<numCourses;i++){
            dfs(i,adj);
        }
     vector<bool>res;
        for(auto it:queries){
            res.push_back(depMap[it[0]].count(it[1]));
        }
        return res;

    }

    unordered_set<int> dfs(int node, vector<vector<int>>&adj){
        if(depMap.count(node)){
            return depMap[node] ;
        }
   
        for(auto it:adj[node]){
            unordered_set<int>temp;
            temp=dfs(it,adj);
            depMap[node].insert(temp.begin(),temp.end());
        }
        depMap[node].insert(node);
        
        return depMap[node];

    }
};