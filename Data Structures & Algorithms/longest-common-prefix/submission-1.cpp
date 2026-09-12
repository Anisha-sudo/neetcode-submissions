class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     int n=strs.size();
     string ans;
     for(int j=0;j<strs[0].size();j++){
        
       for(int i=1;i<strs.size();i++){
        if(strs[i][j]!=strs[i-1][j]){
            return ans;
        }
         
       }
        ans=ans+strs[0][j];
    }  
     return ans; 
    }
};