/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL or head->next==NULL) return false;
        ListNode* s=head;
        ListNode* f=head->next;
        while(f!=s){
            if(f->next==NULL or f->next->next==NULL) return false;
            s=s->next;
            f=f->next->next;
        }

        return true;
    }
};
