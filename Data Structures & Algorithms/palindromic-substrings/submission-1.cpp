class Solution {
public:
    int countSubstrings(string s) {
    int ans=0;
        for(int i=0;i<s.length();i++){
            int left=i,right=i;
            while(left>=0 and right<s.length() and s[left]==s[right]){
               ans++;
                left--;right++;
            }
            left=i,right=i+1;
            while(left>=0 and right<s.length() and s[left]==s[right]){
               ans++;
                left--;right++;
            }
        }return ans;
    }
};
