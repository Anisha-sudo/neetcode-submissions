class Solution {
public:
   map<int,int>mp;
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
           if(mp.find(target-nums[i])!=mp.end()){
            return {mp[target-nums[i]],i};
           }
           mp[nums[i]]=i;
        }
        return {0,0};
    }
};
