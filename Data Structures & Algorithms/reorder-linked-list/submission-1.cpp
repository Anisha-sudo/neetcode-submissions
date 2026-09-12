/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {

       ListNode* slow=head;
       ListNode* fast=head;
       ListNode* right=head;
       while(right->next){
        right=right->next;
       }
       while(fast and fast->next){
        slow=slow->next;
        fast=fast->next->next;

       } 
       ListNode* prev=nullptr;
       while(slow){
        ListNode* temp=slow->next;
        slow->next=prev;
        prev=slow;
        slow=temp;
       }

       ListNode* left=head;
      

       while(left<right){
        ListNode*temp=left->next;
        left->next=right;
        left=temp;
        ListNode*temp2=right->next;
        right->next=left;
        right=temp2;
       }
       
         left->next=nullptr;
    }
};
