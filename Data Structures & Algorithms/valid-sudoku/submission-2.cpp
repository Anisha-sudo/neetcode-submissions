class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       
        
        for(int i=0;i<9;i++){
             set<char>col;
        set<char>row;
        set<char>square;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.' && row.find(board[i][j])!=row.end()){
                    return false;
                }
                row.insert(board[i][j]);
            }
              for(int j=0;j<9;j++){
                if(board[j][i]!='.' && col.find(board[j][i])!=col.end()){
                    return false;
                }
                col.insert(board[j][i]);
            }
           
            for(int k=0;k<3;k++){
                for(int l=0;l<3;l++){
                     int x=(i/3)*3+k;
                     int y=(i%3)*3+l;
                      if(board[x][y]!= '.' && square.find(board[x][y])!=square.end()){
                    return false;
                    }
                   square.insert(board[x][y]);
                }
            }
         
        }
           return true;

    }
};
