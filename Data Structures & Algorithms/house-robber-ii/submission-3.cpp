class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n==1)return nums[0];
        vector<int>dp(nums.size(),-1);
        vector<int>dp1(nums.size(),-1);
        int x=robber(nums,dp,n-2,0);
        int y =robber(nums,dp1,n-1,1);
        return max(x,y);
    }

    int robber(vector<int>nums,vector<int>&dp,int index,int startIndex){
        if(index<startIndex)return 0;
    
        if(index==startIndex){
          return nums[index];
        }
          if(dp[index]!=-1)return dp[index];
          return dp[index]=max(robber(nums,dp,index-1,startIndex),nums[index]+robber(nums,dp,index-2,startIndex));
    }
};
