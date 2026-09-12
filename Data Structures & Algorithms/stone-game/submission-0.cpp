class Solution {
public:
    
    bool stoneGame(vector<int>& piles) {
       return helper(0,piles.size()-1,0,0,0,piles);
       //name=0 alice
       //name=1 bob
    }

    bool helper(int start,int end,int name,int as,int bs,vector<int>&piles){
        if(start>=end){
            return as>bs;
        }
        if(name==0){
          return helper(start+1,end,1,as+piles[start],bs,piles) ||helper(start,end-1,1,as+piles[end],bs,piles);
        }
        if(name==1){
            return helper(start+1,end,0,as,bs+piles[start],piles)|| helper(start,end-1,0,as,bs+piles[end],piles);
        }
    }
};