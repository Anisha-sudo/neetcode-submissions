class Solution {
public:

   vector<vector<int>>ans;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp;
        dfs(0,nums,temp);
        return ans;
    }

    void dfs(int i,vector<int>&nums,vector<int>&temp){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
         for(int index=0;index<nums.size();index++){
            if(nums[index]==INT_MIN)continue;
            int t=nums[index];
            nums[index]=INT_MIN;
            temp.push_back(t);
            dfs(i+1,nums,temp);
            temp.pop_back();
            nums[index]=t;
       }
    }
};
