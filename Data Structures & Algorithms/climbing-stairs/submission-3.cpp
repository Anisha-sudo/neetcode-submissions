class Solution {
public:
   vector<int>ans;
    int climbStairs(int n) {
        ans.resize(n+1,-1);
        ans[1]=1;
        ans[2]=2;
        cs(n);
        return ans[n];
    }
    int cs(int n){
      if(n==1)return 1;
      if(n==2)return 2;
      if(ans[n]!=-1){
        return ans[n];
      }
      return ans[n]= cs(n-1)+cs(n-2);
    }
};
