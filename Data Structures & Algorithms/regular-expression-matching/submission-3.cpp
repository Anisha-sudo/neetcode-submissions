class Solution {
public:
    bool isMatch(string s, string p) {
        return helper(0,0,s,p);
    }

    bool helper(int i,int j,string &s, string &p){
        if(j==p.length())return i==s.length();
        bool ans=(i<s.length() and (s[i]==p[j] || p[j]=='.'));
        if(p[j+1]=='*'){
            return helper(i,j+2,s,p)||(ans and helper(i+1,j,s,p));
        }
        if(ans)return helper(i+1,j+1,s,p);
        return false;

    }
};
