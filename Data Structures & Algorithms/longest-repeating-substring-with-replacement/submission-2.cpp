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
        if(maxFreqChar<mp[s[i]]){
          maxFreqChar=mp[s[i]];
          maxFreqC=s[i];
        }
       
        while(i-j+1-maxFreqChar>k){
          mp[s[j]]--;
         if(mp[j]==maxFreqC){
            maxFreqChar--;
          }
            j++;
         }
         ans=max(ans,i-j+1);i++;
        }
        return ans;
    }
};
