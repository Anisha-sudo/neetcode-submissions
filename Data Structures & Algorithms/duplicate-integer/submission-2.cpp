class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool ans; 
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
        if(mp[nums[i]])return true;
        mp[nums[i]]++;
        }
        return false;
    }
};