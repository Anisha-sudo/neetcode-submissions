class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        //consider the sums as range and we use binary search to find minimum among all possible sum.
        int low=INT_MIN,high=0,res=low;

        for(int i=0;i<nums.size();i++){
            low=max(low,nums[i]);
            high=high+nums[i];
        }

        while(low<=high){
            int mid=low+(high-low)/2;
            if(canSplit(nums,mid)<=k){
                res=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return res;
    }
  int canSplit(vector<int>& nums, int largest) {
    //check if we are able to do k or less split and sum of each subgrp is at most largest;
        int subarray = 1, curSum = 0;
        for (int num : nums) {
            curSum += num;
            if (curSum > largest) {
                subarray++;
                curSum = num;
            }
        }
        return subarray;
    }
};