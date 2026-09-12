class Solution {
public:
vector<int>dp;
    int integerBreak(int n) {
        dp.resize(n+1,-1);
         dp[1]=1;
       return dfs(n,n);

       
        
    }

    int dfs(int target,int finalTarget){
        if(target<0)return 0;
        if(target==0){return 1;}
        if(dp[target]!=-1)return dp[target];
       int res=1;
       if(target!=finalTarget){
          for(int i=1;i<=target;i++){
            res=max(res,i*dfs(target-i,finalTarget));

        }
       }else{
        for(int i=1;i<target;i++){
            res=max(res,i*dfs(target-i,finalTarget));

        }
        }
        dp[target]=res;
        return res;
    }
};