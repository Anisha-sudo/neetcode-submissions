class Solution {
public:

    string encode(vector<string>& strs) {
        string encryptedStr="";
      for(int i=0;i<strs.size();i++){
         encryptedStr+=to_string(strs[i].length())+'#'+strs[i];
      }
      cout<<encryptedStr<<endl;
      return encryptedStr;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(s.length()>i){
            int len=0;
            while(s[i]!='#'){
             len=len*10+(s[i]-'0');
             cout<<len<<" ";
             i++;
            }
            i++;
             string temp="";
            while(len>0){
            temp=temp+s[i++];
            len--;
            }
            cout<<temp<<" ";
            ans.push_back(temp);
        }
        return ans;

    }
};
