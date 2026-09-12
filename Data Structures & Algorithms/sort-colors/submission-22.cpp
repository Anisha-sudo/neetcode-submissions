class Solution {
public:
    void sortColors(vector<int>& nums) {

        int i=0,j=nums.size()-1;
        for(int p=0;p<=j;p++){
           if (nums[p]==0){
            swap(nums[p],nums[i]);
            i++;
           }
           else if(nums[p]==2){
            swap(nums[p],nums[j]);
                j--;
                p--;
          }
        }
        
    }
};