class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=0;
        map<char,int>mp;
        while(i<s.length()){
         mp[s[i]]++;
           while(mp[s[i]]>1){
                mp[s[j]]--;
                j++;
              }
        ans=max(ans,i-j+1);
           i++;
        }
        return ans;
    }
};
