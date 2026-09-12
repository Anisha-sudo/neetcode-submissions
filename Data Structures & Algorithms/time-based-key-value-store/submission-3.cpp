class TimeMap {
public:
   map<string,vector<pair<int,string>>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {

        for(auto &it:mp){
            for(auto i:it.second){
                cout<<i.first<<i.second<<endl;
            }
        }
        if(mp.find(key)!=mp.end()){
            vector<pair<int,string>>vec=mp[key];
            int low=0,high=vec.size()-1,mid;
            while(low<=high){
                mid=low+(high-low)/2;
                cout<<"vec[mid].first"<<vec[mid].first<<endl;
                cout<<"vec[mid].second"<<vec[mid].second<<endl;

                if(vec[mid].first==timestamp)return vec[mid].second;
                else if(vec[mid].first<=timestamp){
                    low=mid+1;
                }else {
                    high=mid-1;
                }

            }if(high<0) return "";
            return vec[high].second;
        }else{return "";};
    }
};
