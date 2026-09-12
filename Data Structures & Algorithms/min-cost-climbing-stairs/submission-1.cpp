class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        return minCost(cost,n);
        
    }

    int minCost(vector<int>&cost,int n){
        if(n<2)return 0;
        return min(minCost(cost,n-1)+cost[n-1],minCost(cost,n-2)+cost[n-2]);
    }
};
