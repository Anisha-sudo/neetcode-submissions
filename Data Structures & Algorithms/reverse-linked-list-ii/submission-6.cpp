class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;

        // Move prev to node just before position left
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        ListNode* curr = prev->next;
        ListNode* curr1 = prev->next;
        ListNode* prev1=nullptr;
        ListNode* temp=nullptr;
        // Reverse nodes between left and right
     for (int i = left; i <= right; i++) {
         temp=curr->next;
          curr->next=prev1;
          prev1=curr;
          curr=temp;
        }
          prev->next=prev1;
           curr1->next=temp;
        return dummy.next;
    }
};
