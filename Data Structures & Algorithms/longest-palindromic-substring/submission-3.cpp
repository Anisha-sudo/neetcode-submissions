class Solution {
public:
    string longestPalindrome(string s) {
        int len=INT_MIN;
        string ans="";
        for(int i=0;i<s.length();i++){
            int left=i,right=i;
            while(left>=0 and right<s.length() and s[left]==s[right]){
                if(right-left+1>len){
                    len=right-left+1;
                    ans=s.substr(left,right-left+1);
                }
                left--;right++;
            }
             left=i;right=i+1;
               while(left>=0 and right<s.length() and s[left]==s[right]){
                if(right-left+1>len){
                    len=right-left+1;
                    ans=s.substr(left,right-left+1);
                }
                 left--;right++;
            }
        }return ans;
    }
};
