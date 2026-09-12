class Solution {
public:
    map<int,int>mp;
    priority_queue<pair<int,int>>pq;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
          pq.push({it.second,it.first});
        }
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
