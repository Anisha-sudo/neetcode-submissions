class Solution {
public:
    int findMin(vector<int> &nums) {
        int low=0,high=nums.size()-1,mid;
        if(nums.size()==1)return nums[0];
        if(nums.size()==2)return min(nums[0],nums[1]);
        while(low<high){
            mid=low+(high-low)/2;
             if(nums[mid]<nums[mid-1] and nums[mid]<nums[mid+1])return nums[mid];
            if(nums[mid]>nums[low] and nums[mid]<nums[high])return nums[low];
             if(nums[mid]<nums[low] and nums[mid]>nums[high])return nums[low];
            if(nums[low]>nums[mid]){
                high=mid-1;
            }else if(nums[high]<nums[mid]){
                low=mid+1;
            }

        }
        return nums[low];
    }
};
