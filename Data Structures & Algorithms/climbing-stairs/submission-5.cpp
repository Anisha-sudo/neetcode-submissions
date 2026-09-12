class Solution {
public:
   
    int climbStairs(int n) {
      if(n==1)return 1;
      if(n==2)return 2;
         int x=1,y=2;
         for(int i=3;i<=n;i++){
          int temp=y;
          y=x+y;
          x=temp;
         }
         return y;
      
        

    }
};
