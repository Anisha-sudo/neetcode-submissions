class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
       

        for(int i=0;i<strs.size();i++){
            vector<int>temp(26,0);
          for(int j=0;j<strs[i].length();j++){
              temp[strs[i][j]-'a']++;
          }
          string key=to_string(temp[0]);
          for(int i=1;i<26;i++){
             key+=','+to_string(temp[i]);
          }
          mp[key].push_back(strs[i]);
        }
        vector<vector<string>>res;
        for(auto it :mp){
            res.push_back(it.second);

        }
        return res;

    }
};
