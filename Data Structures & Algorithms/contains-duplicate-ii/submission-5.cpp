class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        map<int,int>mp;
        while(i<nums.size()){
            while(i<nums.size() && mp.find(nums[i])==mp.end()){
               mp[nums[i]]=i;
                i++;
            }
            if(i<nums.size() && mp.find(nums[i])!=mp.end()){
                if(abs(i-mp[nums[i]]<=k)){
                 return true;
                 }
                 else{
                    mp[nums[i]]=i;
                    i++;
                }
            }else{
                i++;
            }

           
        }
        return false;
    }
};