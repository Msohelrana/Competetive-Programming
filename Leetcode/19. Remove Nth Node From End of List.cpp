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
        int totalNode=0;
        ListNode* cur = head;
        while(cur!=nullptr){
            totalNode++;
            cur=cur->next;
        }
        ListNode* prev = new ListNode(0);
        ListNode* temp=prev;
        prev->next=head;
        for(int i=0;i< totalNode-n;i++){
            prev=prev->next;
        }
        if(head->next == nullptr){
            return nullptr;
        }
        prev->next=prev->next->next;
        return temp->next;
    }
};
