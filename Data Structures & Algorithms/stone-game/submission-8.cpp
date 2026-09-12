class Solution {
public:
    
    bool stoneGame(vector<int>& piles) {
        vector<vector<int>>dp(piles.size()+1,vector<int>(piles.size()+1,-1));
       return helper(0,piles.size()-1,0,0,0,piles,dp);
       //name=0 alice
       //name=1 bob
    }

    bool helper(int start,int end,int name,int as,int bs,vector<int>&piles,vector<vector<int>>&dp){
        if(start>=end){
            return as>bs;
        }
        if(dp[start][end]!=-1)return dp[start][end];
        if(name==0){
          return dp[start][end]=helper(start+1,end,1,as+piles[start],bs,piles,dp) ||helper(start,end-1,1,as+piles[end],bs,piles,dp);
        }
        if(name==1){
            return dp[start][end]=helper(start+1,end,0,as,bs+piles[start],piles,dp)|| helper(start,end-1,0,as,bs+piles[end],piles,dp);
        }
    }
};