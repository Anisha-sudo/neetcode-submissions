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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* curr=head;
        ListNode* prev=nullptr;
        ListNode* temp;
        int c=1;
        while(curr and c<left){
            prev=curr;
            curr=curr->next;
            c++;
        }
        ListNode* pre=prev;
        ListNode* cur=curr;
        while(curr and c<=right){
         temp=curr->next;
         curr->next=prev;
         prev=curr;
         curr=temp;
         c++;
        }
          cur->next=temp;
        if(pre and pre->next){
        pre->next=prev;}
        else{
            return prev;
        }
      
        return dummy.next ;
    }
};