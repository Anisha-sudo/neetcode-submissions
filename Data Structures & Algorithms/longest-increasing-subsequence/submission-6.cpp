class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
      return helper(0,nums,INT_MIN);
    }

      int helper(int index, vector<int>nums,int limit){
        if(index>=nums.size())return 0;
      
        int pick=0,nonPick=0;
        if(nums[index]>limit){
            pick= 1+helper(index+1,nums,nums[index]);
        }
           nonPick= helper(index+1,nums,limit);
        
     return max(pick,nonPick);
      }
};
