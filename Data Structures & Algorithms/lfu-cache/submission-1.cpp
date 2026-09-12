class LFUCache {

private:
 struct ListNode{
    int key;
    int val;
    int count;
    int timestamp;
    ListNode(int key,int val,int count,int timestamp):key(key),val(val),count(count),timestamp(timestamp){}
 };
 int c;
 int timestamp=0;
 map<int,ListNode*>mp;
public:
    LFUCache(int capacity) {
        c=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()){
            return -1;
        }else{
            int ans=mp[key]->val;
            mp[key]->count++;
            mp[key]->timestamp=++timestamp;
            return ans;
        }
    }
    
    void put(int key, int value) {
        if(c<=0)return;
        if(mp.find(key)!=mp.end())
        {
            mp[key]->val=value;
            mp[key]->count++;
            mp[key]->timestamp=++timestamp;
            return;
        }

        if(mp.size()>=c){
            int minFreq=INT_MAX,mintimestamp=INT_MAX;
            int k;
            ListNode* tem;
            for(auto it:mp){
              if(it.second->count<minFreq){
                tem=it.second;
                minFreq=it.second->count;
                mintimestamp=it.second->timestamp;
                k=it.first;
              }
           if(it.second->count==minFreq){
                    if(it.second->timestamp<mintimestamp){
                        tem=it.second;
                        k=it.first;
                        mintimestamp=it.second->timestamp;
                    }
                }
              }
                   delete(tem);
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