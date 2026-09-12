class Solution {
public:

   vector<vector<int>>ans;
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(0,nums);
        return ans;
    }

    void dfs(int i,vector<int>&nums){
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
         for(int index=i;index<nums.size();index++){
            swap(nums[i],nums[index]);
            dfs(i+1,nums);
            swap(nums[index],nums[i]);
        }
    }
};
