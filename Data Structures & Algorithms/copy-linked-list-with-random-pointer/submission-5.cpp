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
        if(!head)return head;
       Node*curr=head;
       while(curr){
        Node* newnode=new Node(curr->val);
        Node* temp=curr->next;
        curr->next=newnode;
        newnode->next=temp;
        curr=temp;
       }
        curr=head;
       while(curr and curr->next){
        if(curr->random){
        curr->next->random=curr->random->next;
        }else{
            curr->next->random=nullptr;
        }
        curr=curr->next->next;
       }
       curr=head;
        Node* ans=head->next;
        while(curr and curr->next){
            Node* temp=curr->next;
            curr->next=curr->next->next;
            if(curr->next){
            temp->next=curr->next->next;
            }else{
                temp->next=nullptr;
            }

            curr=curr->next;
        }
       return ans;
    }
};
