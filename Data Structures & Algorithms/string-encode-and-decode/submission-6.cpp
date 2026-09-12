class Solution {
public:

    string encode(vector<string>& strs) {
      string encodeStr="";
      for(auto it : strs){
        encodeStr+=to_string(it.size())+'#'+it;
      }
      cout<<encodeStr<<endl;
      return encodeStr;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0,x=0;
        while(i<s.size()){
            
            cout<<"i:"<<i<<" s[i]: "<<s[i]<<endl;
           x=0;
            while(s[i]!='#'){
                 x=x*10+(s[i]-'0');
                i++;}
            cout<<s.substr(i+1,x)<<endl;
         ans.push_back(s.substr(i+1,x)); 
            i=i+x+1;
        }
       
        return ans;
          
    }
};
