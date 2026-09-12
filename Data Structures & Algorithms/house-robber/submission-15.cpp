class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        ans[0]=nums[0];
        
        for(int i=1;i<nums.size();i++){
            ans[i]= max(nums[i]+ans[i-2],ans[i-1]);
        }
       return ans[nums.size()-1];
    }
};
