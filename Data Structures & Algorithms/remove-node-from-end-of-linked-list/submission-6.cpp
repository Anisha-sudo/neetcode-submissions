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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* curr=head;
        int count=0;
        while(temp){
         count++;
         temp=temp->next;
        }
        n=count-n+1;
        ListNode* prev=nullptr;
        while(n>1){
         prev=curr;
         curr=curr->next;
         n--;
         }
          if(prev){
         prev->next=curr->next;  return head;
         }else{
           head=head->next;
           return head;
         }

    
          
      

    }
};
