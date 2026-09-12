class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum=0;
        int ans=INT_MIN;
        for(int i=0;i<stones.size();i++){
             sum=sum+stones[i];
        }
        vector<vector<int>>dp(stones.size()+1,vector<int>(sum+1,0));
        for(int i=0;i<=stones.size();i++){
            dp[i][0] = 1;
        }
        for(int i=1;i<=stones.size();i++){
           for(int j=1;j<=sum;j++){
            if(stones[i-1]<=j){
                dp[i][j]= dp[i-1][j-stones[i-1]]||dp[i-1][j];
            }else{
                dp[i][j]= dp[i-1][j];
            }
           
           }
        }
        for(int i=0;i<=sum/2;i++){
            if(dp[stones.size()][i] == 1){
                ans = max(i,ans);
            }
           
        }
        int diff = sum - ans;
        return ans>diff? ans-diff: diff-ans;
    }
};