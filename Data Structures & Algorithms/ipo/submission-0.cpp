class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>>cap;
        for(int i=0;i<capital.size();i++){
            cap.push_back({capital[i],profits[i]});
        }
        sort(cap.begin(),cap.end());
        priority_queue<int>maxH;
        int idx=0;
        for(int i=0;i<k;i++){
            while(idx<profits.size() and cap[idx].first<=w){
                maxH.push(cap[idx].second);
                idx++;
            }
            if(maxH.empty()){
                break;
            }
            w+=maxH.top();
            maxH.pop();
        }
        return w;
        

    }
};