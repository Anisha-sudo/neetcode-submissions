class Solution {
public:
    map<string,bool>dp;
    bool wordBreak(string s, vector<string>& wordDict) {
        if(s.length()==0)return true;
        if(dp.find(s) != dp.end())
    return dp[s];

        for(int i=0;i<s.length();i++){
            if(find(wordDict.begin(),wordDict.end(),s.substr(0,i+1))!=wordDict.end()){
                dp[s.substr(0,i+1)]=true;
                if(wordBreak(s.substr(i+1,s.length()),wordDict) == true){
                    return true;
                }
            }else{
                 dp[s.substr(0,i+1)]=false;
                }

        }
        return false;
    }
};
