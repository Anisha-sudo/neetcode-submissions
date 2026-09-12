class Solution {
public:
    int characterReplacement(string s, int k) {
         map<char,int>mp;
         int ans=INT_MIN;
        int i=0,j=0;
        int maxFreqChar=INT_MIN;
        char maxFreqC;
        int sum=0;
        while(i<s.size()){
         mp[s[i]]++;
        maxFreqChar=max(maxFreqChar,mp[s[i]]);
        while(i-j+1-maxFreqChar>k){
          mp[s[j]]--;
            j++;
         }
         ans=max(ans,i-j+1);i++;
        }
        return ans;
    }
};
