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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0,carry=0,val=0;
        ListNode* newnode=new ListNode(0);
        ListNode* ans=newnode;
        while(l1 and l2){
           sum=l1->val+l2->val+carry;
            carry=sum/10;
            val=sum%10;
          newnode->next=new ListNode(val);
          newnode=newnode->next;
          l1=l1->next;
          l2=l2->next;
          }

          while(l1){
           sum=l1->val+carry;
            carry=sum/10;
            val=sum%10;
          newnode->next=new ListNode(val);
          newnode=newnode->next;
          l1=l1->next;
          }
          while(l2){
          sum=l2->val+carry;
            carry=sum/10;
            val=sum%10;
          newnode->next=new ListNode(val);
          newnode=newnode->next;
          l2=l2->next;
          }
          if(carry>0){
            cout<<carry;
           newnode->next=new ListNode(carry);
           newnode=newnode->next;
          }

          return ans->next;
    }
};
