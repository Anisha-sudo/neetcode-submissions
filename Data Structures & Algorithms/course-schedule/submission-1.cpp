class Solution {
public:
   unordered_map<int,vector<int>>preMap;
        unordered_set<int>visiting;
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
     
     for(int i=0;i<numCourses;i++){
        preMap[i]={};
     }

     for(auto it:prerequisites){
        preMap[it[0]].push_back(it[1]);
     }

     for(int i=0;i<numCourses;i++){
        if(!dfs(i)){
            return false;
        }
     }
     return true;

    }

    bool dfs(int crs){
       

        if(preMap[crs].empty()){
            return true;
        }
            visiting.insert(crs);
        for(auto it : preMap[crs]){
            if(visiting.count(it) || !dfs(it)){
                return false;
            }
        }
        visiting.erase(crs);
        return true;
    }
};
