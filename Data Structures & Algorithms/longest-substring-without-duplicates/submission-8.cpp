class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int ans=0;
        int i=0,j=0;
        while(i<s.length()){
            mp[s[i]]++;
            if(mp[s[i]]>1){
            while(mp[s[j]]!=mp[s[i]]){
             mp[s[j]]--;
             j++;

            }
                mp[s[j]]--;
            j++;
            
           
          }
          
          ans=max(ans,i-j+1);
          i++;
        }
        return ans;
    }
};
