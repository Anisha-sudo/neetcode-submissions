class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int ans1;
        ans[0]=nums[0];
        ans[1]=max(nums[0],nums[1]);
        for(int i=2;i<nums.size()-1;i++){
          ans[i]=max(nums[i]+ans[i-2],ans[i-1]);
        }
        ans1=ans[nums.size()-2];
          ans[1]=nums[1];
          ans[2]=max(nums[1],nums[2]);
          for(int i=3;i<nums.size();i++){
          ans[i]=max(nums[i]+ans[i-2],ans[i-1]);
        }
        return max(ans1,ans[nums.size()-1]);
    }
};
