class MyHashMap {

private:
struct ListNode{
    int key,val;
    ListNode* next;
    ListNode(int k=-1,int v=-1):key(k),val(v),next(nullptr){}
};

vector<ListNode*>set;

public:
    MyHashMap():set(10000) {
        for(auto& it :set){
            it=new ListNode();
        }
        
    }
    void put(int key, int value) {
        ListNode* curr = set[key%10000];
        while(curr->next!=nullptr){
            if(curr->next->key==key){
                curr->next->val=value;
                return;
            }
            curr=curr->next;
        }
        curr->next=new ListNode(key,value);
    }

    int get(int key) {
        ListNode* curr= set[key%10000];
        while(curr->next!=nullptr){
            if(curr->next->key==key){
                return curr->next->val;
            }
            curr=curr->next;
        }
       return -1;
    }
    
    void remove(int key) {
        ListNode* curr = set[key%10000];
        while(curr->next!=nullptr){
            if(curr->next->key==key){
                ListNode* prev=curr->next;
                curr->next=curr->next->next;
                delete prev;
                return;
            }
            curr=curr->next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */