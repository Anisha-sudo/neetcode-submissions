class Solution {
public:
    vector<pair<int,int>>directions={{0,1},{1,0},{0,-1},{-1,0}};
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
    int rows=heights.size(),cols=heights[0].size();

    vector<vector<bool>>pac(rows,vector<bool>(cols,false));
     vector<vector<bool>>atl(rows,vector<bool>(cols,false));

     for(int i=0;i<rows;i++){
        dfs(i,0,pac,heights);
        dfs(i,cols-1,atl,heights);
     }
      for(int j=0;j<cols;j++){
        dfs(0,j,pac,heights);
        dfs(rows-1,j,atl,heights);
    }

    vector<vector<int>>ans;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(pac[i][j] && atl[i][j]){
                ans.push_back({i,j});
            }
        }
    }
    return ans;
}

void dfs(int i,int j, vector<vector<bool>>&matrix,vector<vector<int>>&grid){

    matrix[i][j]=true;

      for(auto it:directions){
        int ni=i+it.first,nj=j+it.second;
        if(ni>=0 && ni<grid.size()&&nj>=0 && nj<grid[0].size() && grid[ni][nj]>=grid[i][j] && !matrix[ni][nj]){
            dfs(ni,nj,matrix,grid);
        }
    }
}

};





            


    

