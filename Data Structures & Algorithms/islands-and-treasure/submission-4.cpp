class Solution {
public:
   vector<vector<int>> direction = {{-1, 0}, {1, 0},
                                    {0, -1}, {0, 1}};

        int INF = INT_MAX;
    void islandsAndTreasure(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==INT_MAX){
                  grid[i][j]=bfs(i,j,grid);
                }
            }
        }
    }


      
    int bfs(int i, int j ,vector<vector<int>>&grid){
   queue<pair<int,int>>q;
   q.push({i,j});

   vector<vector<int>>visit(grid.size(),vector<int>(grid[0].size(),0));

   visit[i][j]=-1;
    int step=0;
   while(q.size()>0){
    int size=q.size();
    for(int k=0;k<size;k++){
       pair<int,int>p=q.front();
       i=p.first;
       j=p.second;
       q.pop();
       if(grid[i][j]==0)return step;
        for(auto& it:direction){
            int nc=j+it[1],nr=i+it[0];
            if(nc>=0 && nr<=grid.size()-1 and nr>=0 && nc<=grid[0].size()-1 and grid[nr][nc]!=-1 and visit[nr][nc]==0){
                    visit[nr][nc]=-1;
                    q.push({nr,nc});
            }
            
        }
    }step++;

}return INF;




    }
};
