class MyHashMap {
private:
map<int,int>mp; 
public:
    MyHashMap() {
    for (int i = 0; i < 100000; ++i) {
        mp[i] = -1; 
     }
    }
    
    void put(int key, int value) {
        mp[key%100000]=value;
    }
    
    int get(int key) {
        return mp[key%100000];
    }
    
    void remove(int key) {
        mp[key%100000]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */