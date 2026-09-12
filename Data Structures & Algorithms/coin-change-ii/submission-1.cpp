class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,0));
        dp[0][0]=1;
        return helper(0,amount,coins,dp);
    }

    int helper(int index,int target,vector<int>&coins,vector<vector<int>>&dp){
        if(index>=coins.size())return 0;
        if(target==0)return 1;
        if(dp[index][target]!=0)return dp[index][target];
           if(coins[index]<=target){
            return dp[index][target]=helper(index,target-coins[index],coins,dp)+helper(index+1,target,coins,dp);
           }
           return dp[index][target]=helper(index+1,target,coins,dp);
            
    }
   
};
