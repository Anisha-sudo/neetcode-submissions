class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }

        vector<pair<int,int>>arr;
        for(auto it:mp){
            arr.push_back({it.second,it.first});
        }
        sort(arr.rbegin(),arr.rend());
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(arr[i].second);
        }
        return res;
    }
};
