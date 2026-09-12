class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     vector<int>prefix(nums.size());
     vector<int>suffix(nums.size());
     vector<int>ans(nums.size());
     int n=nums.size()-1;
     prefix[0]=nums[0];
     suffix[n]=nums[n];
     for(int i=1;i<nums.size();i++){
        prefix[i]=prefix[i-1]*nums[i];
     }
     for(int i=n-1;i>=0;i--){
        suffix[i]=suffix[i+1]*nums[i];
     }

     for(int i=1;i<n;i++){
        ans[i]=prefix[i-1]*suffix[i+1];
     }
     ans[0]=suffix[1];
     ans[n]=prefix[n-1];
    
    return ans;
    }
};
