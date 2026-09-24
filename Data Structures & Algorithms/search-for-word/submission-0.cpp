class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
     for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(dfs(i,j,0,board,word))return true;
        }
     }
     return false;
    }

    bool dfs(int x,int y, int i ,vector<vector<char>>& board, string word){       if(i==word.length()){
            return true;
        } 
        if(x>=board.size() || x<0 || y>=board[0].size() || y<0 || word[i]!=board[x][y] || board[x][y]=='#'){
        return false;
        }
      
        bool ans;
           board[x][y]='#';
           ans=dfs(x,y+1,i+1,board,word)||dfs(x,y-1,i+1,board,word)||
               dfs(x+1,y,i+1,board,word)||dfs(x-1,y,i+1,board,word);

            board[x][y]=word[i];
        
        
        return ans;
        
    }
};
