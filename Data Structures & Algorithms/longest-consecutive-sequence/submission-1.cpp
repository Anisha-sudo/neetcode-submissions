class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int ans=0;
        for(auto it :nums){
            s.insert(it);
        }
        for(auto it:nums){
          
                int size=1;
                while(s.find(it+size)!=s.end()){
                    size++;
                }
                ans=max(ans,size);
            
        }
        return ans;
    }
};
