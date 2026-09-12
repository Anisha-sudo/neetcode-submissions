class Solution {
public:
vector<vector<int>>ans;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       vector<int>temp;
        dfs(0,nums,temp);
        ans.push_back({});
        return ans;
    }


    void dfs(int i,vector<int>&nums,vector<int>&temp){
             if(i==nums.size()){
              return;
             }

             for(int idx=i;idx<nums.size();idx++){
                temp.push_back(nums[idx]);
                ans.push_back(temp);
                dfs(idx+1,nums,temp);
                temp.pop_back();
                while(idx<nums.size()-1 and nums[idx]==nums[idx+1]){
                    idx++;
                }
             }

    }
};
