class LRUCache {
public:
    struct Node{
        int key;
        int value;
        Node* next;
        Node* prev;
        Node(int key,int v):key(key),value(v),next(nullptr),prev(nullptr){}
    };
    int c;
    Node* front;
    Node* rear;
    unordered_map<int,Node*>mp;
    LRUCache(int capacity) {
      c=capacity;
      front=nullptr;
      rear=nullptr;
    }


  void insert(Node* node){
     if(front and rear){
    rear->next=node;
    node->prev=rear;
    node->next=nullptr;
    rear=node;}
    else if(!front and !rear){
        front=node;
        rear=node;
        
    }
    }
 
    void remove(Node* node){
      if(front==rear){
        front=rear=nullptr;
        return;
      }
      if(front==node){
         front=front->next;
         front->prev=nullptr;
         return;
      }
      if(rear==node){
        rear=rear->prev;
        rear->next=nullptr;
        return;
      }

           node->prev->next=node->next;
           node->next->prev=node->prev;
     }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
              Node* node=mp[key];
              remove(node);
              insert(node);
              return node->value;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
              Node* node=mp[key];
              node->value=value;
              remove(node);
              insert(node);
        }else{
              if(mp.size() == c){        // 🔥 FIX: evict first
            Node* temp = front;
            remove(temp);
            mp.erase(temp->key);
            delete temp;
        }
            Node* node=new Node(key,value);
            insert(node);
            mp[key]=node;
        
       
}
    }
};
