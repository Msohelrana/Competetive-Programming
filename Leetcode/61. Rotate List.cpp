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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 or head==nullptr) return head;
        int n=0;
        ListNode* cur=head;
        while(cur){
            n++;
            cur=cur->next;
        }
        k=k%n;
        if(k==0) return head;
        int l=n-k-1;
        ListNode* lastNode=head;
        while(l--){
            lastNode=lastNode->next;
        }
        cur=head;
        for(int i=1;i<n;i++){
           cur=cur->next;
        }
        cur->next=head;
        cur=lastNode->next;
        lastNode->next=nullptr;
        return cur;

    }
};
