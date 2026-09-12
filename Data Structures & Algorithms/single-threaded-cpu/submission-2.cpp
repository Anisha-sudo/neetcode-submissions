class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
      vector<vector<int>>arr;
      vector<int>ans;
      for(int i=0;i<tasks.size();i++){
        arr.push_back({tasks[i][0],tasks[i][1],i});

      }  
      sort(arr.begin(),arr.end());
     int time=arr[0][0],i=0;
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>mh;
      while(i<tasks.size() or !mh.empty()){
           
           while(i<arr.size() and arr[i][0]<=time){
            mh.push({arr[i][1],arr[i][2]});
            i++;
           }

           if(!mh.empty()){
            time=time+mh.top().first;
            ans.push_back(mh.top().second);
            mh.pop();
           }else{
            time=arr[i][0];
           }
      }
      return ans;
    }
};