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
            if(canSplit(nums,k,mid)==true){
                res=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return res;
    }
  bool canSplit(vector<int>& nums, int k, int largest) {
        int subarray = 1, curSum = 0;
        for (int num : nums) {
            curSum += num;
            if (curSum > largest) {
                subarray++;
                if (subarray > k) return 0;
                curSum = num;
            }
        }
        return true;
    }
};