class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size()*matrix[0].size()-1;
        int i=0;
        cout<<"i:"<<i<<"m"<<m<<endl;
        while(i<=m){
            int mid=(i+m)/2;
            cout<<mid;
            int row=mid/matrix[0].size();
            int col=mid%matrix[0].size();
            if(matrix[row][col]==target)return true;
            else if(matrix[row][col]<target){
                i=mid+1;
            }else{
                m=mid-1;
            }
          
        }
        return false;
    }
};
