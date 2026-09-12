class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,mid;
        while(low<=high){
           mid=low+(high-low)/2;
           if(nums[mid]==target)return true;
           if(nums[mid]<nums[low]){
            //right sorted
            if(target<nums[mid] or target> nums[high]){
                high=mid-1;
            }else 
            low=mid+1;
           }
           else if(nums[mid]>nums[low]){
            //left sorted
            if(target>nums[mid] or target<nums[low]){
                low=mid+1;
            }else high=mid-1;

           }else{
           low++;
           }
         }
        return false;
    }
};