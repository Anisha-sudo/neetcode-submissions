class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
          int ans=0;
          vector<vector<int>>dp(matrix.size()+1,vector<int>(matrix.size()+1,-1));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
               ans=max(ans, helper(i,j,matrix,dp));
            }
        }
        return ans;
    }
    
        
    int helper(int i,int j,vector<vector<int>>&matrix,vector<vector<int>>&dp){
        int ans=1;
        if(dp[i][j]!=-1)return dp[i][j];
        if(i+1<matrix.size() and matrix[i+1][j]>matrix[i][j]){
            ans=1+helper(i+1,j,matrix,dp);
        }
        if(i-1>=0 and matrix[i-1][j]>matrix[i][j]){
            ans=max(ans,1+helper(i-1,j,matrix,dp));
        }
        if(j+1<matrix[i].size() and matrix[i][j+1]>matrix[i][j]){
            ans=max(ans,1+helper(i,j+1,matrix,dp));
        }
        if(j-1>=0 and matrix[i][j-1]>matrix[i][j]){
            ans=max(ans,1+helper(i,j-1,matrix,dp));
        }
      return dp[i][j]=ans;
    }
};
