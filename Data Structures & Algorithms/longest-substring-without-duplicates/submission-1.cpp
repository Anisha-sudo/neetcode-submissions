class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=0;
        map<char,int>mp;
        while(i<s.length()){
          if(mp.find(s[i])==mp.end()){
            mp[s[i]]++;
          
           }else {
              while(mp.find(s[i])!=mp.end()){
                mp.erase(s[j]);
                j++;}
            }
          mp[s[i]]++;
        ans=max(ans,i-j+1);
        i++;
        }
        return ans;
    }
};
