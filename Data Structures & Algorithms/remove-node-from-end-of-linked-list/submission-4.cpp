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
        ListNode* curr=head;
        ListNode* curr1=head;
        int num=1;
        while(curr1->next){
        num++;
        curr1=curr1->next;
        }
        n=num-n-1;
        cout<<n<<endl;
        if(n==-1){
            ListNode* tempo=head;
           // delete(tempo);
            return head->next;
        }
        while(n>0){
          curr=curr->next;
          n--;
        }
        cout<<n;
        if(curr->next){
        ListNode* temp=curr->next;
        curr->next=curr->next->next;
        delete(temp);
        }else{
            delete(curr);
            return nullptr;
        }
        
        return head;
    }
};
