class Solution {
public:

    string encode(vector<string>& strs) {
      string ans;
      for(auto it:strs){
        ans=ans+to_string(it.length())+'#'+it;
      }
      return ans;
    }

    vector<string> decode(string s) {
      vector<string>ans;
      cout<<s;
      for(int i=0;i<s.length();i++){
        int num=0;
        while(s[i]!='#'){
            
            num=(s[i]-'0')+num*10;
            i++;
        }
           string str="";
        while(num>0){
            i++;
            str=str+s[i];
            num--;
            
        }
        ans.push_back(str);
 

      }
      return ans;
    }
};
