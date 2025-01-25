class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode dummy(0);
        ListNode* prev = &dummy;
        prev->next = head; 
        ListNode* cur = head;

        while (cur) {
            bool isDuplicate = false;
            while (cur->next && cur->val == cur->next->val) {
                cur = cur->next;
                isDuplicate = true;
            }
            if (isDuplicate) {
                prev->next = cur->next;
            } else { 
                prev = prev->next;
            }
            cur = cur->next;
        }
        return dummy.next;
    }
};
