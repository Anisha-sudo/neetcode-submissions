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
        ListNode* first=l1;
        ListNode* second=l2;
       
    //    while(first->next){
    //     first=first->next;
    //    }
    //    while(second->next){
    //     second=second->next;
    //    }
    //   ListNode* curr=l1;
    //   ListNode* prev=nullptr;
    //   while(curr){
    //   ListNode* temp=curr->next;
    //   curr->next=prev;
    //   prev=curr;
    //   curr=temp;
    //   }
    //  curr=l2;
    //  prev=nullptr;
    //    while(curr){
    //   ListNode* temp=curr->next;
    //   curr->next=prev;
    //   prev=curr;
    //   curr=temp;
    //   }



       int carry=0;
       int res=0;
        ListNode* prev=nullptr;
        while(first and second){
            res=first->val+second->val+carry;
             cout<<"res"<<res<<endl;
             int val=res%10;
             carry=res/10;
             cout<<"val"<<val<<endl;
             cout<<"carry"<<carry<<endl;
             ListNode* node = new ListNode(val);
             node->next=prev;
             prev=node;
             first=first->next;
             second=second->next;

        }
        cout<<carry<<endl;
          while(first){
            res=first->val+carry;
             int val=res%10;
             carry=res/10;
             ListNode* node = new ListNode(val);
             node->next=prev;
             prev=node;
             first=first->next;
             

        }
          while(second){
            res=second->val+carry;
             int val=res%10;
             carry=res/10;
             ListNode* node = new ListNode(val);
             node->next=prev;
             prev=node;
             second=second->next;

        }

        while(carry>0){
             int val=carry%10;
             carry=val/10;
             ListNode* node = new ListNode(val);
             node->next=prev;
             prev=node;
             }

    ListNode* curr=prev;
     ListNode* pre=nullptr;
       while(curr){
      ListNode* temp=curr->next;
      curr->next=pre;
      pre=curr;
      curr=temp;
      }
        return pre;
    }
};
