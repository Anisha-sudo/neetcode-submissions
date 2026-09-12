class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        unordered_map<char,int>cs;
        unordered_map<char,int>ts;
        for(int i=0;i<s.length();i++){
          cs[s[i]]++;
          ts[t[i]]++;
        }
        if (cs==ts){
        return true;}
        else {return false;}
    }
};
