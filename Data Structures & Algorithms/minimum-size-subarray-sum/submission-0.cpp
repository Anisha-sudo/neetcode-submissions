class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int i=0,j=0,sum=0;
        while(i<nums.size()){
            sum=sum+nums[i];
            while(sum>=target){
                sum=sum-nums[j];
                j++;
                cout<<i-j+1;
                ans=min(ans,i-j+1);
                }
       
            i++;
        }
        if(ans==INT_MAX)return 0;
        return ans+1;
    }
};