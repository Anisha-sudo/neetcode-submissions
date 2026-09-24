class Solution {
public:

   vector<string>ans;
    vector<string> generateParenthesis(int n) {
        string temp;
       
        dfs(n,temp,0,0);
        
        return ans;
    }

    void dfs(int n, string& temp,int open,int close){
        if(n==open && open==close){
            ans.push_back(temp);
            return;
        }
        if(open<n){
            temp=temp+'(';
            open++;
            dfs(n,temp,open,close);
            open--;
            temp.pop_back();
        }
        if(open>close){
            temp=temp+')';
            close++;
            dfs(n,temp,open,close);
            close--;
            temp.pop_back();
        }
         

      
    }
};
