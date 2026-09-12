class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int>prefix(nums.size());
       prefix[0]=nums[0];
       for(int i=1;i<nums.size();i++){
        prefix[i]=prefix[i-1]*nums[i];
        }
           int x=prefix[nums.size()-2];
           int suff=nums[nums.size()-1];
        for(int i=nums.size()-2;i>0;i--){
                
                 prefix[i]=prefix[i-1]*suff;
                 
                 suff=suff*nums[i];

        }
        prefix[nums.size()-1]=x;
        prefix[0]=suff;
        return prefix;

    }
};
