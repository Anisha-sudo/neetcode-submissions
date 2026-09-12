class Solution {
public:

  vector<string> children(string lock) {
        vector<string> res;
        for (int i = 0; i < 4; ++i) {
           string next=lock;
           next[i]=(next[i]-'0'+1)%10 +'0';
           res.push_back(next);
           next=lock;
           next[i]=(next[i]-'0'-1+10)%10 +'0';
           res.push_back(next);
        }
        return res;
    }
   
    int openLock(vector<string>& deadends, string target) {
       unordered_set<string>visit(deadends.begin(),deadends.end());
       if(visit.count("0000"))return -1;

       queue<pair<string,int>>q;

       q.push({"0000",0});
       visit.insert("0000");

       while(q.size()>0){
        pair<string,int>p=q.front();
        q.pop();
        string lock=p.first;
        int turn=p.second;
        if(lock==target)return turn;
        for(auto child:children(lock)){
            if(!visit.count(child)){
                visit.insert(child);
                q.push({child,turn+1});
            }
         }
    }
    return -1;

    }
        
    
};