class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>st;
        map<int,int>mp;
        int i=0;
        while(i<temperatures.size()){
            if(st.empty()){
            st.push({temperatures[i],i});
            i++;}
            while(!st.empty() and temperatures[i]>st.top().first){
                      mp[st.top().second]=i-st.top().second;
                      st.pop();
                   
                      

            }
            if(i<temperatures.size()){
            st.push({temperatures[i],i});i++;}

        }
        vector<int>ans(temperatures.size(),0);
        for(auto it:mp){
            ans[it.first]=it.second;
        }
        return ans;
    }
};
