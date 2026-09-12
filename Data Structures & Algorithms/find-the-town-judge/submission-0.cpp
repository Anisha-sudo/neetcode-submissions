class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int judge=trust[0][1];
        for(int i=1;i<trust.size();i++){
                  if(trust[i][1]!=judge)return -1;
                  if(trust[i][0]==judge)return -1;
        }
        return judge;

    }
};