class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return helper(0,target,0,nums);
    }

    int helper(int index,int target,int sum,vector<int>&nums){
        if(index>nums.size())return 0;
        if(target==sum and index==nums.size())return 1;
        return helper(index+1,target,sum-nums[index],nums)+helper(index+1,target,sum+nums[index],nums);
    }
};
