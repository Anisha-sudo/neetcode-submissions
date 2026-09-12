class LFUCache {
public:
   struct ListNode{
    int key;
    int value;
    int count;
    int timestamp;
    ListNode(int key,int value,int count,int timestamp):key(key),value(value),count(count),timestamp(timestamp){}
    };

  
    int c;
    int timestamp=0;
    unordered_map<int,ListNode*>mp;

    LFUCache(int capacity) {
        c=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end())return -1;
        int ans=mp[key]->value;
        mp[key]->count++;
        mp[key]->timestamp=++timestamp;
        return mp[key]->value;
    }
    
    void put(int key, int value) {
         if(c<=0)return;
        if(mp.find(key)!=mp.end()){
           mp[key]->value=value;
           mp[key]->count++;
           mp[key]->timestamp=++timestamp;
           return;
        }

            if(mp.size()>=c){
              int minFreq=INT_MAX,minTimeStamp=INT_MAX;
              int k;
              ListNode* node=nullptr;
              for(auto it: mp){
                if(it.second->count<minFreq){
                    node=it.second;
                    k=it.first;
                    minFreq=it.second->count;
                    minTimeStamp=it.second->timestamp;
                }
                if(it.second->count==minFreq){
                    if(it.second->timestamp<minTimeStamp){
                        node=it.second;
                        k=it.first;
                        minTimeStamp=it.second->timestamp;
                    }
                }
              }
                   delete(node);
                    mp.erase(k);
            }
            mp[key]=new ListNode(key,value,1,++timestamp);
         
         }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */