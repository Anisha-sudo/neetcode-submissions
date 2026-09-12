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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        ListNode* prev=&dummy;
        int size=0;
        ListNode* curr=head;
       while(curr){
            size++;
            curr=curr->next;
        }
        curr=head;
        for(int i=0;i+k<=size;i=i+k){
         ListNode* temp=curr;
         prev->next=reverse(curr,k);
         prev=temp;


        }
        if(size%k!=0){
            prev->next=curr;
        }
           return dummy.next;
    }

        ListNode* reverse(ListNode* &curr,int k){
           ListNode* pre=nullptr;
           while(k>0){
            k--;
            ListNode* temp=curr->next;
            curr->next=pre;
            pre=curr;
            curr=temp;

           }
           return pre;
        }
     
    
};
