class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,mid;

        while(low<=high){
            mid=low+(high-low)/2;

            if(nums[mid]==target){return mid;}

            if(nums[mid]<nums[low]){
                if(nums[mid]>target or nums[high]<target){
                    high=mid-1;
                }else low=mid+1;
            }else{
                if(target<nums[low] or target>nums[mid]){
                    low=mid+1;
                }else high=mid-1;
            }
        }return -1;
    }
};
