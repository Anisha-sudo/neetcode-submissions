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
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* next=head;
         int count=0;
        if(!lengthIsk(curr,k))return curr; 
        while(curr and count<k){
           
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(curr){
            head->next=reverseKGroup(curr,k);
        }
        return prev;
    }

    bool lengthIsk(ListNode* node,int k){
        int c=0;
        cout<<node->val<<" ";
        cout<<endl;
        while(node){
            node=node->next;
            c++;
            
        }
        if(c<k)return false;
        return true;
    }
};
