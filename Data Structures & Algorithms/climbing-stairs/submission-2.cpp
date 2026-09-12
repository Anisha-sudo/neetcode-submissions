class Solution {
public:

    int climbStairs(int n) {
     int x=1,y=2,temp=0;
     if(n==1){return 1;}
     if(n==2){return 2;}
       for(int i=3;i<=n;i++){
       temp=x+y;
       x=y;
       y=temp;
       }
       return y;
    }

};
