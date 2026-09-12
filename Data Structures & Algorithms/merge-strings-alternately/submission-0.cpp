class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int length=word1.size()>word2.size()?word2.size():word1.size();
        cout<<length<<endl;
        for(int i=0;i<length;i++){
            ans=ans+word1[i]+word2[i];     
        }
        cout<<ans;
        if(word1.size()>word2.size()){
            ans=ans+word1.substr(length);
        }else{
             ans=ans+word2.substr(length);
        }
        return ans;
    }
};