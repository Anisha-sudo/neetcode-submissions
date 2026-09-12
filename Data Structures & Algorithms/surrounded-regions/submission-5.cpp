class Solution {
public:
vector<vector<int>>directions={{1,0},{-1,0},{0,1},{0,-1}};
    void solve(vector<vector<char>>& board) {
        int il=board.size();
        int jl=board[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<il;i++){
            
            if(board[i][0]=='O'){
                  q.push({i,0});
            }
            if( board[i][jl-1]=='O'){
                  q.push({i,jl-1});
            }
        }
          for(int j=0;j<jl;j++){
            
            if(board[0][j]=='O'){
                  q.push({0,j});
            }
            if( board[il-1][j]=='O'){
                  q.push({il-1,j});
            }
        }

        while(q.size()>0){
             pair<int,int>p=q.front();
             q.pop();
             int x=p.first;
             int y=p.second;

             if(board[x][y]=='O'){
                board[x][y]='T';
                for(auto& dir:directions){
                    int nx=x+dir[0];
                    int ny=y+dir[1];
                    if(nx<0 || nx>=board.size() || ny<0 || ny >=board[0].size()|| board[nx][ny]=='T' ){
                        continue;
                    }
                    q.push({nx,ny});
                }
             }
        }

        for(int i=0;i<il;i++){
            for(int j=0;j<jl;j++){
                if(board[i][j]=='T'){
                    board[i][j]='O';
                }
                else if(board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
    }
};
