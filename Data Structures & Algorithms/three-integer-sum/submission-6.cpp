class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
        int j=i+1,k=nums.size()-1;
           while(j<k){
                vector<int>temp;
                if(nums[j]+nums[k]+nums[i]==0){
                    cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k];
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j++]);
                    temp.push_back(nums[k--]);
                    if(find(ans.begin(),ans.end(),temp)==ans.end()){
                    ans.push_back(temp);}
                }else if(nums[j]+nums[k]+nums[i]>0){
                   k--;
                }else if(nums[j]+nums[k]+nums[i]<0){
                   j++;
                }
            }
       
         }
           return ans;

    }
};
