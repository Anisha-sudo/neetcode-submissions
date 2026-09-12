class Solution {
public:
    int jump(vector<int>& nums) {
        int left=0,right=0,res=0;
                
        while(right<nums.size()-1)
        {    int far=INT_MIN;
            for(int i=left;i<=right;i++){
             far=max(far,i+nums[i]);
            } 
            res++;
            left=right+1;
            right=far;
        }
        return res;
    }
};
