class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,n,mini=INT_MAX;
        n=prices.size();
       for(int i=0;i<n;i++){
       profit=max(profit,prices[i]-mini);
       mini=min(mini,prices[i]);
       }return profit;
    }
};
