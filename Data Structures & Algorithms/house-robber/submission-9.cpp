class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
       return roob(nums,n,dp); 
    }

    int roob(vector<int>nums,int index,vector<int>&dp){
        if(index==0)return nums[index-1] ;
        if (index<0)return 0;
        if(dp[index]!=-1)return dp[index];
         return dp[index]=max(roob(nums,index-1,dp),nums[index-1]+roob(nums,index-2,dp));
        
    }
};
