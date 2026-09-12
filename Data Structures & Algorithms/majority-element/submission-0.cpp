class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int max_count=0;
         int res=0;
         map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>max_count){
                max_count=mp[nums[i]];
                res = nums[i];
            }
        }
        return res;
    }
};