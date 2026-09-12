class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>memo(n+1,0);
        return minCost(cost,n,memo);
        
    }

    int minCost(vector<int>&cost,int n, vector<int>& memo){
        if(n<2)return 0;
        if(memo[n]!=0)return memo[n];
        return min(minCost(cost,n-1,memo)+cost[n-1],minCost(cost,n-2,memo)+cost[n-2]);
    }
};
