/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        Node* curr=head;

        while(curr){
            Node* node= new Node(curr->val);
            Node* temp=curr->next;
           curr->next=node;
           node->next=temp;
           curr=temp;
        }
        curr=head;
        while(curr){
        if(curr->random){
        curr->next->random=curr->random->next;
        }else{
        curr->next->random=nullptr;
        }
        curr=curr->next->next;
        }

        curr=head;
          Node* start=curr->next;
        while(curr){
            Node* temp=curr->next;
            
            curr->next=temp->next;
            if(curr->next){
            temp->next=curr->next->next;
            }else{
                temp->next=curr->next;
            }
            curr=curr->next;
        }
        return start;
    }
};
