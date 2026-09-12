class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>>ans;
           map<string,vector<int>>mp;
         for(int i=0;i<strs.size();i++){
            string temp=strs[i];
             sort(temp.begin(),temp.end());
             mp[temp].push_back(i);
            }

        for(auto it:mp){
            vector<string>tempo;
            for(auto i:it.second){
                tempo.push_back(strs[i]);
            }
            ans.push_back(tempo);

        }
        return ans;
    }
};
