class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        sort(trips.begin(),trips.end(),
        [](const vector<int>&a,const vector<int>& b){
            return a[1]<b[1];
        });
           int currCap=0;
           priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        for(int i=0;i<trips.size();i++){
            while(!minh.empty() and trips[i][1]>=minh.top().first){
                currCap=currCap-minh.top().second;
                minh.pop();
            }
            currCap+=trips[i][0];
            minh.push({trips[i][2],trips[i][0]});
            if(currCap>capacity)return false;


        }
        return true;
    }
};