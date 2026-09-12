class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      for(int i=1;i<nums.size();i++){
        int pivot=nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>pivot){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=pivot;
      }
      return nums;
    }
};