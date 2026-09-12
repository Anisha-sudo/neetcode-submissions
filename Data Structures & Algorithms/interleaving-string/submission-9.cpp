class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.length()+s2.length()!=s3.length())return 0;
        vector<vector<int>>dp(s1.length()+1,vector<int>(s2.length()+1,0));
        dp[0][0]=1;
        for(int i=1;i<=s1.length();i++){
           dp[i][0]=(s1[i-1]==s3[i-1] and dp[i-1][0]);
        }
        for(int i=1;i<=s2.length();i++){
          dp[0][i]=(s2[i-1]==s3[i-1] and dp[0][i-1]);
        }

        for(int i=1;i<=s1.length();i++){
            for(int j=1;j<=s2.length();j++){
                if(s1[i-1]==s3[i+j-1] and dp[i-1][j])
               {dp[i][j]=1;}
              else if(s2[j-1]==s3[i+j-1] and dp[i][j-1]){
                dp[i][j]=1;
               }

            }
        }
       return dp[s1.length()][s2.length()]==1;
    }
};
