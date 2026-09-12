class Solution {
public:
int rows,cols;
    void solve(vector<vector<char>>& board) {
        rows=board.size();
        cols=board[0].size();
        for(int i=0;i<rows;i++){
            if(board[i][0]=='O'){
                capture(i,0,board);
            }
            if(board[i][cols-1]=='O'){
                capture(i,cols-1,board);
            }
        }
         for(int j=0;j<cols;j++){
            if(board[0][j]=='O'){
                capture(0,j,board);
            }
            if(board[rows-1][j]=='O'){
                capture(rows-1,j,board);
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                if(board[i][j]=='T'){
                    board[i][j]='O';
                }
            }
        }

    }

    void capture(int i,int j,vector<vector<char>>&board){
        if(i<0 || j<0 || i>=rows || j>=cols ||board[i][j]!='O'|| board[i][j]=='T'){
            return;
        }
        board[i][j]='T';
        capture(i,j+1,board);
        capture(i,j-1,board);
        capture(i-1,j,board);
        capture(i+1,j,board);
    }
};
