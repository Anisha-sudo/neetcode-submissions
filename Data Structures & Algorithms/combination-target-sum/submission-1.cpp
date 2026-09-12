class Solution {
public:
set<vector<int>>ans;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<int>temp;
        dfs(nums,0,target,temp);
     vector<vector<int>>ans1;
    for(auto it:ans){
        ans1.push_back(it);
    }
    return ans1;
    }

    void dfs(vector<int>&nums,int index,int target,vector<int>&temp){
        if(target<0)return;
      
        if(target==0 and index==nums.size()){
            ans.insert(temp);
            return;
        }
        if(index==nums.size())return;
        temp.push_back(nums[index]);   
        dfs(nums,index,target-nums[index],temp);
       
          temp.pop_back();
        dfs(nums,index+1,target,temp);
    }

    
};
