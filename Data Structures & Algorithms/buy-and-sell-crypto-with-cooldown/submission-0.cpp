class Solution {
public:
    int maxProfit(vector<int>& prices) {
       return max(helper(0,1,prices),helper(1,1,prices));
    }

    int helper(int i,int buy,vector<int>&prices){
        if(i>=prices.size())return 0;
        if(buy==0){
            //buy==0 means sell
            return max(prices[i]+helper(i+2,1,prices),helper(i+1,0,prices));
        }else{
            //to buy
             return max(-prices[i]+helper(i+1,0,prices),helper(i+1,1,prices));
           }
    }
};
