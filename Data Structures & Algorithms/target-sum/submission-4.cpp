class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        map<int,int>dp;
        dp[0]=1;

        for(int i=0;i<nums.size();i++){
            map<int,int>temp;
            for(auto &it:dp){
                temp[it.first+nums[i]]+=it.second;
                temp[it.first-nums[i]]+=it.second;
            }
            dp=temp;
        }
        return dp[target];
    }
};
