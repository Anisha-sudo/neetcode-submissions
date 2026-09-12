class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return helper(0,nums,dp);

    }

    int helper(int index,vector<int>&nums,vector<int>&dp){
        
        if(index==nums.size()-1)return 0;
        if(dp[index]!=-1)return dp[index];
           int ans=INT_MAX-1;
        for(int i=index+1;i <= min((int)nums.size() - 1, index + nums[index]);i++){
           ans=min(ans,1+helper(i,nums,dp));
        }
        return dp[index]=ans;
    }
};
