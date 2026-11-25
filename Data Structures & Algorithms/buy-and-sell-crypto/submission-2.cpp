class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minB=prices[0];
      

      for(auto it:prices){
           profit=max(profit,it-minB);
           minB=min(minB,it);
      }
      return profit;
   
    }
};
