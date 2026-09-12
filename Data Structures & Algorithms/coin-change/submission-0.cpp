class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)return 0;
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,INT_MAX));
        for(int i=0;i<=coins.size();i++)
        dp[i][0]=0;
        for(int i=1;i<=coins.size();i++){
            for(int j=1;j<=amount;j++){
                
                if(coins[i-1]<=j){
                    if(dp[i][j-coins[i-1]] != INT_MAX)
    dp[i][j] = min(1 + dp[i][j-coins[i-1]], dp[i-1][j]);
else
    dp[i][j] = dp[i-1][j];
               
                }else{
                    dp[i][j]=dp[i-1][j];
                }

            }
        }
        if(dp[coins.size()][amount]==INT_MAX)return -1;
        else return dp[coins.size()][amount];;
        
    }
};
