class Solution {
public:
    vector<vector<int>>ans;
    set<vector<int>>tempo;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        dfs(candidates,0,target,temp);
        for(auto it:tempo){
            ans.push_back(it);
        }
        return ans;
    }

    void dfs(vector<int>& candidates, int index,int target,vector<int>&temp){
        if(target<0)return;
        if(target==0 ){
             vector<int>c=temp;
            sort(c.begin(),c.end());
            tempo.insert(c);
            return;
        }
        if(index>=candidates.size())return;
          for(int i=index;i<candidates.size();i++){
             temp.push_back(candidates[i]);
            dfs(candidates,i+1,target-candidates[i],temp);
            temp.pop_back();
            while(i<candidates.size()-1 and candidates[i]==candidates[i+1]){
                i++;
            }
          }
     
    }
};
