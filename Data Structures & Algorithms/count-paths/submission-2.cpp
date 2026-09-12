class Solution {
public:



    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
         for(int i=0;i<=m;i++){
            dp[i][0]=1;
         }
         for(int j=0;j<=n;j++){
            dp[0][j]=1;
         }
        return helper(m-1,n-1,dp);
    }

    int helper(int i,int j, vector<vector<int>>&dp){
        if(dp[i][j]!=0)return dp[i][j];
        if((i<0)||(j<0))return 0;
        if(i==0 and j==0){
            return 1;
        }
        return dp[i][j]=(helper(i-1,j,dp)+ helper(i,j-1,dp));
    }
};
