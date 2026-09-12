class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.size()+1,vector<int>(word2.size()+1,-1));
        
        return minD(0,0,word1,word2,dp);

    }

    int minD(int i,int j,string w1,string w2,vector<vector<int>>&dp){
        if(i==w1.length())return w2.length()-j;
        if(j==w2.length())return w1.length()-i;
        if(dp[i][j]!=-1)return dp[i][j];
         
        if(w1[i]==w2[j]){
            return dp[i][j]=minD(i+1,j+1,w1,w2,dp);
        }else {
            return dp[i][j]=1+ min(min(minD(i+1,j,w1,w2,dp),minD(i,j+1,w1,w2,dp)),minD(i+1,j+1,w1,w2,dp));
        }
    }
};
