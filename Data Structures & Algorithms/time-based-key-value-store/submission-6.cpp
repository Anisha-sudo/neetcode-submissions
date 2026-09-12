class TimeMap {
public:
map<string,vector<pair<int,string>>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key)!=mp.end()){
            vector<pair<int,string>>vec=mp[key];
            int low=0,high=vec.size()-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(vec[mid].first==timestamp)return vec[mid].second;
                else if(vec[mid].first>timestamp){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
            if(high<0)return "";
            return vec[high].second;
        }else{
             return "";
        }

    }
};
