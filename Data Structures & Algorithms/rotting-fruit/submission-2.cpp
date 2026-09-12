class Solution {
public:
    int minutes=0;
    vector<vector<int>>direction={{0,1},{0,-1},{1,0},{-1,0}};
    queue<pair<int,int>>q;
    int fresh=0;
    int orangesRotting(vector<vector<int>>& grid) {
        vector<vector<int>>visited(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                 q.push({i,j});
                 visited[i][j]=-1;
                }
                if(grid[i][j]==1)
                {
                    fresh++;
                }
            }
        }
        while(!q.empty() and fresh>0){
            int size=q.size();
            for(int k=0;k<size;k++){
                pair<int,int>curr=q.front();
                q.pop();
                int i=curr.first;
                int j=curr.second;
              for(auto it:direction){
                    int nr=i+it[0];
                    int nc=j+it[1];
                    if(nc>=0 and nc<grid[0].size() and nr>=0 and nr<grid.size() and grid[nr][nc]==1 and visited[nr][nc]!=-1){
                    q.push({nr,nc});
                    visited[nr][nc] = -1;
                    fresh--;
                    }
                }
            }
            minutes++;

        }
        return fresh>0?-1:minutes;
    }
};
