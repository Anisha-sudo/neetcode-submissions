class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
     quickSort(nums,0,nums.size()-1);
     return nums;
    }
    int partition(vector<int>&nums,int low,int high){
        int pivot=nums[low];
        int i=low,j=high;
        while(i<j){
            
            while(i<=high && nums[i]<=pivot ){i++;}
            while(j>=low && nums[j]>pivot ){j--;}
            if(i<j){
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[j],nums[low]);
        return j;
    }

    void quickSort(vector<int>&nums,int low,int high){
        if (low>=high)return ;
        int pivotIndex=partition(nums,low,high);
        quickSort(nums,low,pivotIndex-1);
        quickSort(nums,pivotIndex+1,high);
    }
};