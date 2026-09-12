class Solution {
public:
   map<int,int> mp;
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size(),i=0;
      while(n>0){
        if(mp.find(nums[i])!=mp.end()){
            return true;
        }
        mp[nums[i]]++;
        i++;
        n--;
      }
      return false;
    }
};