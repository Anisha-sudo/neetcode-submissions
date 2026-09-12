class Solution {
public:
    int uniquePaths(int m, int n) {
        return helper(0,0,m,n);
    }

    int helper(int i,int j,int m,int n){
        if((i>m-1)||(j>n-1))return 0;
        if(i==m-1 and j==n-1){
            return 1;
        }
        return (helper(i+1,j,m,n)+ helper(i,j+1,m,n));
    }
};
