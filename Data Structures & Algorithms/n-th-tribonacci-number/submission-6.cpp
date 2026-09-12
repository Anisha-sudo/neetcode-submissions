class Solution {
public:
   vector<int>dp;
    int tribonacci(int n) {
        dp.resize(n+1,0);
        return tribo(n,dp);
                 }

    int tribo(int n ,vector<int>&dp){
     if(n==0)return 0;
        if(n<=2)return 1;
        if(dp[n]!=0)return dp[n];
        dp[n]= tribo(n-1,dp)+tribo(n-2,dp)+tribo(n-3,dp);
         return dp[n];
    }
};