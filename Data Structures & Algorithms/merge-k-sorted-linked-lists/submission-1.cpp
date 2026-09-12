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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* node=nullptr;
        for(int i=0;i<lists.size();i++){
            node=merge(lists[i],node);
        }
        return node;
    }

    ListNode* merge(ListNode* l1,ListNode* l2){
        ListNode dummy(0);
        ListNode* curr=&dummy;
        if(!l1)return l2;
        if(!l2)return l1;
        while(l1 and l2){
            if(l1->val<=l2->val){
                curr->next=l1;
                l1=l1->next;
            }else{
              curr->next=l2;
              l2=l2->next;
            }
            curr=curr->next;
        }
        if(l1){
            curr->next=l1;
        }
        if(l2){
            curr->next=l2;
        }
        return dummy.next;
    }
};
