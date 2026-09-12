class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;int res=0,sum=0;
        //count of sum 0 is 1;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
         int diff=sum-k;
          res+=mp[diff];  
         mp[sum]++;
           
    

        }
        return res;


    }
};