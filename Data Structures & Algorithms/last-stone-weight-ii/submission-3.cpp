class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum=0;
        int ans=INT_MIN;
        for(int i=0;i<stones.size();i++){
             sum=sum+stones[i];
        }
       vector<int>dp(sum+1,0);
       dp[0]=1;
        
        for(int i=1;i<=stones.size();i++){
            vector<int>temp(sum+1,0);
            for(int j=0;j<=sum;j++){
            if(stones[i-1]<=j){
                temp[j]= dp[j-stones[i-1]]||dp[j];
            }else{
                temp[j]= dp[j];
            }
           
           }
           dp=temp;
        }
        for(int i=0;i<=sum/2;i++){
            if(dp[i] == 1){
                ans = max(i,ans);
            }
           
        }
        int diff = sum - ans;
        return ans>diff? ans-diff: diff-ans;
    }
};