class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int e1=INT_MIN,e2=INT_MIN,c1=0,c2=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
          if(nums[i]==e1){
                c1++;
            }
            else if(nums[i]==e2){
                c2++;
            }
            else if(c1==0 && nums[i]!=e2){
                e1=nums[i];
                c1=1;
            }
            else if(c2==0 && nums[i]!=e1){
                e2=nums[i];
                c2=1;
            }
            else {c1--;c2--;}
        }
       vector<int>ans;
       c1=0;c2=0;

       for(int i=0;i<n;i++){
        if(e1==nums[i])c1++;
        if(e2==nums[i])c2++;
       }
       int mini= (int)(n/3)+1;
       if(c1>=mini)ans.push_back(e1);
       if(c2>=mini)ans.push_back(e2);
    
    return ans;
}
};