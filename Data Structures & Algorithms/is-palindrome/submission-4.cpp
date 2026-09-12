class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string str="";
        for(int i=0;i<s.length();i++){
            if((s[i]>='0' && s[i]<='9')||(s[i]>='a' && s[i]<='z')||(s[i]>='A'&& s[i]<='Z'))
            str.push_back(tolower(s[i]));
        }
        cout<<str.length();
        cout<<str;
        // cout<<str.length()/2-1;
        if(str.length()==0 || str.length()==1)return true;
        for(int i=0;i<=(str.length()/2-1);i++){
            
            if(str[i]!=str[str.length()-i-1])return false;

        }
        return true;
    }
};
