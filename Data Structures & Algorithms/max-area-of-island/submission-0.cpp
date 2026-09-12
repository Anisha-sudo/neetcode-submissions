class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
           int ans=0;
        vector<vector<int>>visited(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1 and visited[i][j]!=-1){
                  ans=max(ans,dfs(i,j,visited,grid));
                  
                }
            }
        }
        return ans;
    }

    int dfs (int i,int j , vector<vector<int>>&visited,vector<vector<int>>&grid){
        
        if(i<0 || j<0 || i>=visited.size() || j>=visited[0].size() || grid[i][j]==0|| visited[i][j]==-1){
            return 0;
        }
           
       if(grid[i][j]==1 and visited[i][j]!=-1){
            visited[i][j]=-1;
            return 1+dfs(i,j+1,visited,grid)+dfs(i+1,j,visited,grid)+dfs(i-1,j,visited,grid)+dfs(i,j-1,visited,grid);
            
        }
    }
    
};
