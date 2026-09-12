class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
      vector<vector<int>>dp(s1.length()+1,vector<int>(s2.length()+1,-1));
       return helper(s1,s2,s3,0,0,0,dp);
    }
    bool helper(string s1, string s2, string s3,int idx1,int idx2,int idx3,vector<vector<int>>&dp){
       if(dp[idx1][idx2]!=-1)return dp[idx1][idx2];
       if(idx3==s3.length()){
        return (idx1==s1.length()and idx2==s2.length());
       }
       if(idx1<s1.length() and s1[idx1]==s3[idx3]){
        if (helper(s1,s2,s3,idx1+1,idx2,idx3+1,dp))return dp[idx1][idx2]=true;
       }
       if(idx2<s2.length() and s2[idx2]==s3[idx3]){
        if(helper(s1,s2,s3,idx1,idx2+1,idx3+1,dp))return dp[idx1][idx2]=true;
       }
       return dp[idx1][idx2]=false;
      
    }
};
