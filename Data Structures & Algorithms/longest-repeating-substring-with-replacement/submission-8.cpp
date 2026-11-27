class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0;
        int ans=0;
        int maxFreq=INT_MIN;
        map<char,int>mp;
        while(i<s.length()){
           mp[s[i]]++;
           maxFreq=max(maxFreq,mp[s[i]]);
           while(i-j+1-maxFreq>k){
            mp[s[j]]--;
            j++;
            
           }
           ans=max(ans,i-j+1);
           i++;
        }
        return ans;
    }
};
