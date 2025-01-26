class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *lessHead = new ListNode(0), *greaterHead = new ListNode(0);
        ListNode *less = lessHead, *greater = greaterHead;

        while (head) {
            if (head->val < x) {
                less->next = head;
                less = head;
            } else {
                greater->next = head;
                greater = head;
            }
            head = head->next;
        }

        greater->next = nullptr;  
        less->next = greaterHead->next; 

        return lessHead->next; 
    }
};
