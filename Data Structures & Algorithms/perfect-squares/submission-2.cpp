class Solution {
public:
vector<int>dp;
    int numSquares(int n) {
        dp.resize(n+1,INT_MAX);
        dp[0]=0;
      return  dfs(n);
    }

    int dfs(int sum){
        if(sum==0){
            return 0;
        }
        if(dp[sum]!=INT_MAX){
            return dp[sum];
        }
        int res=sum;
        for(int i=1;i*i<=sum;i++){
           res=min(res, 1+dfs(sum-(i*i)));
           
        }
        dp[sum]=res;
        return res;
    }
};