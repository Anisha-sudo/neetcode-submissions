class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(prices.size(),vector<int>(2,INT_MIN));
       return max(helper(0,1,prices,dp),helper(1,1,prices,dp));
    }

    int helper(int i,int buy,vector<int>&prices, vector<vector<int>>&dp){
        if(i>=prices.size())return 0;
        if(dp[i][buy]!=INT_MIN)return dp[i][buy];
        if(buy==0){
            //buy==0 means sell
            return dp[i][buy]=max(prices[i]+helper(i+2,1,prices,dp),helper(i+1,0,prices,dp));
        }else{
            //to buy
             return dp[i][buy]= max(-prices[i]+helper(i+1,0,prices,dp),helper(i+1,1,prices,dp));
           }
    }
};
