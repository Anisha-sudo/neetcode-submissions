class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int>dp(amount+1,0);
        dp[0]=1;
        for(int i=0;i<coins.size();i++){
           // vector<int>temp(amount+1,0);
            for(int j=0;j<=amount;j++){
                if(j>=coins[i])
                dp[j]=dp[j-coins[i]]+dp[j];
                // else{
                //     dp[j]=dp[j];
                // }
            }
           // dp=temp;
        }
        return dp[amount];
    }
};
