class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for (auto it:s){
         
                int size=1;
                while(s.find(it+1)!=s.end()){
                    size++;
                    it++;
                }
                ans=max(ans,size);

            
        }
        return ans;


    }
};
