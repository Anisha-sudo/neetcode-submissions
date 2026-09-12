class Solution {
public:

vector<int>dp;
    int numDecodings(string s) {
          dp.resize(s.length(),-1);
        return  dfs(0,s);
      
         
    }

    int dfs(int i,string& s){
        int res=0;
        if(i==s.length())return 1;
        if(dp[i]!=-1)return dp[i];
        if(s[i]=='0')return 0;
        res=dfs(i+1,s);
        if(i+1<s.size()and ( s[i]=='1' || s[i]=='2' and s[i+1]<'7')){
                res=res+dfs(i+2,s);
         }
      dp[i]=res;
       return res;
    }
};
