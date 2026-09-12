class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
         map<char,int>mp;

         for(int i=0;i<order.length();i++){
            mp[order[i]]=i;
         }

         for(int i=0;i<words.size()-1;i++){
                
                string word1=words[i];
                string word2=words[i+1];
                for(int j=0;j<word1.length();j++){
                    if (j >= word2.size()) {return false;}
                    if(word1[j]!=word2[j] ){
                    if(mp[word1[j]]>mp[word2[j]]) return false;
                    break;
                    }
                }
         }
         return true;
    }
};