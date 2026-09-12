class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int x,y;
        x=nums[0];
        y=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++){
            int temp=y;
            y= max(nums[i]+x,y);
            x=temp;
        }
       return y;
    }
};
