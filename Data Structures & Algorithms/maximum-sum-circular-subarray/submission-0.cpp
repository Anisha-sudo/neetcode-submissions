class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int globalMax=nums[0],globalMin=nums[0],currMax=0,currMin=0,sum=0;

        for(int i=0;i<nums.size();i++){
          currMax=max(currMax+nums[i],nums[i]);
          currMin=min(currMin+nums[i],nums[i]);
          globalMax=max(globalMax,currMax);
          globalMin=min(globalMin,currMin);
          sum=sum+nums[i];
        }
              return globalMax>0?max(globalMax,sum-globalMin):globalMax;
    }
};