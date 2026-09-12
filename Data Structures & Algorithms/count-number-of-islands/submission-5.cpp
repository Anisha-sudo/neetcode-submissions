class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        vector<vector<int>>visited(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1' and visited[i][j]!=-1){
                  dfs(i,j,visited,grid);
                  ans++;
                }
            }
        }return ans;
    }

    void dfs (int i,int j , vector<vector<int>>&visited,vector<vector<char>>&grid){
        
        if(i<0 || j<0 || i>=visited.size() || j>=visited[0].size() || grid[i][j]=='0'|| visited[i][j]==-1){
            return;
        }
           
         

        if(grid[i][j]=='1' and visited[i][j]!=-1){
              visited[i][j]=-1;
            dfs(i,j+1,visited,grid);
            dfs(i+1,j,visited,grid);
            dfs(i-1,j,visited,grid);
            dfs(i,j-1,visited,grid);
            
        }
    }
};
