class Solution {
public:
     map<char,int>mp;
     priority_queue<int>maxHeap;
     queue<pair<int,int>>q;
     int time=0;
    int leastInterval(vector<char>& tasks, int n) {
      for(auto it:tasks){
        mp[it]++;
      }
      for(auto it:mp){
        maxHeap.push(it.second);
      }

      while(!maxHeap.empty() || !q.empty()){
       time++;

       if(!maxHeap.empty()){
        int count=maxHeap.top();
        maxHeap.pop();
            if(count>1){
                q.push({count,time+n});
            }
       }
       if(!q.empty() and q.front().second==time){
        maxHeap.push(q.front().first-1);
        q.pop();
       }
       


      }

      

            return time;


      
    }
};
