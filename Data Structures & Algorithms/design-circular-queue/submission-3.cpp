class MyCircularQueue {

private:
   struct ListNode{
    int val;
    ListNode* next;
    ListNode(int v):val(v),next(nullptr){}
   };
   int cap;
   ListNode* left;
   ListNode* right;
public:
    MyCircularQueue(int k) {
        cap=k;
        left=nullptr;
        right=nullptr;

    }
    
    bool enQueue(int value) {
        if(isFull())return false;
        ListNode* node=new ListNode(value);
        if(isEmpty()){
            left=node;
            right=node;
        }else{
           right->next=node;
            right=right->next;
            right->next=left;
        }
        cap--;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())return false;
        if(cap==1){
            left=nullptr;
            right=nullptr;
        }else{
            ListNode* temp=left;
            left=left->next;
            right->next=left;
            delete(temp);
        }
        cap++;
        return true;
        
    }
    
    int Front() {
      return isEmpty()? -1:left->val;
    }
    
    int Rear() {
        return isEmpty()? -1:right->val;
    }
    
    bool isEmpty() {
        return left==nullptr;
    }
    
    bool isFull() {
        return cap==0;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */