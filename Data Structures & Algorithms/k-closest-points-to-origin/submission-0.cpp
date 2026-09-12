class Solution {
public:
   priority_queue<pair<int,vector<int>>>maxHeap;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        
        for(auto it:points){
            int dist=((it[0])*(it[0])+(it[1])*(it[1]));
                   maxHeap.push({dist,it});
                   if(maxHeap.size()>k){
                    maxHeap.pop();
                   }
        }

        vector<vector<int>>res;
        while(!maxHeap.empty()){
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return res;

    }
};
