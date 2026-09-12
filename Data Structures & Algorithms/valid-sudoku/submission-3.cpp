class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<9;i++){
            map<char,int>mp;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')continue;
                if(mp.find(board[i][j])!=mp.end()){
                    return false;
                }
                mp[board[i][j]]++;
            }
        }
         for(int j=0;j<9;j++){
            map<char,int>mp;
            for(int i=0;i<9;i++){
                if(board[i][j]=='.')continue;
                if(mp.find(board[i][j])!=mp.end()){
                    return false;
                }
                mp[board[i][j]]++;
            }
        }

        for(int k=0;k<9;k++){
            int j=k%3*3;
            int i=k/3*3;
            map<char,int>mp;
            for(int p=0;p<3;p++){
                for(int l=0;l<3;l++){
                    if(board[i+p][j+l]=='.')continue;
                    if(mp.find(board[i+p][j+l])!=mp.end()){
                    return false;
                }
                mp[board[i+p][j+l]]++;
                }
            }
        }
        return true;
    }
};
