class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        map<int,int>mp;
        while(i<nums.size()){
          
            if(i<nums.size() && mp.find(nums[i])!=mp.end()){
                if(abs(i-mp[nums[i]]<=k)){
                 return true;
                }
                
            }
                    mp[nums[i]]=i;
                    i++;
                
        }
        return false;
    }
};