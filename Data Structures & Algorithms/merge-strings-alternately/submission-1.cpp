class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int len= word1.length()<word2.length()?word1.length():word2.length();
        for(int i=0;i<len;i++){
            ans=ans+word1[i]+word2[i];
        }

        while(len<word1.length()){
            ans=ans+word1[len];
            len++;
        }
         while(len<word2.length()){
            ans=ans+word2[len];
            len++;
        }
        return ans;
    }
};