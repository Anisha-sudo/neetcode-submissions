class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int target=0,low=0,high=nums.size()-1;
        sort(nums.begin(),nums.end());
 
        for(int i=0;i<nums.size();i++){
            low=i+1,high=nums.size()-1;
            if(i>0 && nums[i]==nums[i-1]){continue;}
            while(low<high){
                if(nums[low]+nums[high]+nums[i]>target){high--;
                
                }
                else if(nums[low]+nums[high]+nums[i]<target){
                    low++;
                   
                }else {ans.push_back({nums[i],nums[low],nums[high]});
                 low++;high--;
                 while(nums[high]==nums[high+1]){ high--;};
                  while(nums[low]==nums[low-1]){low++;}
                }
            }
        }
        return ans;

    }
};
