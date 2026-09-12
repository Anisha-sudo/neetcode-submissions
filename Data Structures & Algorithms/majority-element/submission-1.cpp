class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element=nums[0],count=1;
        for(int i=1;i<nums.size();i++){
          if (nums[i]==element){
            count++;
          }else if (count==0){
            cout<<i<<" ";
            element=nums[i];
          }else{
            count--;
          }
        }
        return element;
    }
};