class LRUCache {

private:
struct ListNode{
int key;
int val;
ListNode* next;
ListNode* prev;
ListNode(int k,int v):key(k),val(v),next(nullptr),prev(nullptr){}
};
int cap;
ListNode* front;
ListNode* rear;
map<int,ListNode*>mp;
public:
  
    LRUCache(int capacity) {
       cap=capacity;
       front=nullptr;
       rear=nullptr;
    }

    void insert(ListNode* node){
        if(!front and !rear){
          front=node;
          rear=node;
        }else{
            rear->next=node;
            node->prev=rear;
            node->next=nullptr;
            rear=node;
        }
    }

    void remove(ListNode* node){
        if(mp.size()==0)return;
        if(mp.size()==1){
            front=rear=nullptr;return;
        }
        if(node==front){
            front=front->next;
            front->prev=nullptr;
            return;
        }
        if(node==rear){
            rear=rear->prev;
            rear->next=nullptr;
            return;
        }

        node->prev->next=node->next;
        node->next->prev=node->prev;


    }
    
    int get(int key) {
        if(mp.find(key)==mp.end())return -1;
        ListNode* node=mp[key];
        remove(node);
        insert(node);
        return node->val;
    }
    
    void put(int key, int value) {
        if(mp.find(key)==mp.end()){
           ListNode* node =new ListNode(key,value);
           insert(node);
           mp[key]=node;
        }else{
            ListNode* node=mp[key];
            node->val=value;
            remove(node);
            insert(node);
        }
        if(mp.size()>cap){
            ListNode* node=front;
            remove(node);
            mp.erase(node->key);
            delete node;
        }
    }
};
