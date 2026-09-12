class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
       int ans=0;

       for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]==1 ){
            
             if(i<=0 ||(i-1>=0 and grid[i-1][j]==0)){
                  cout<<"i "<<i<<endl;
                cout<<"j "<<j<<endl;
                ans++;

            }
            if(i>=grid.size()-1 || (i+1<grid.size() and grid[i+1][j]==0)){
                  cout<<"i "<<i<<endl;
                cout<<"j "<<j<<endl;
                ans++;
            }
            if(j<=0 ||(j-1>=0 and grid[i][j-1]==0)){
                  cout<<"i "<<i<<endl;
                cout<<"j "<<j<<endl;
                 ans++;
                
            }
             if(j>=grid[0].size()-1 || (j+1<grid[0].size() and grid[i][j+1]==0)){
                  cout<<"i "<<i<<endl;
                cout<<"j "<<j<<endl;
                ans++;
            }
            
           
        }
        }
       }
       return ans;
    }
};