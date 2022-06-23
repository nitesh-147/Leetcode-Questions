class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p = NULL;
        ListNode* c = head;
        ListNode* n;
        while(c != NULL) {
            n = c->next; 
            c->next = p;
            p = c;
            c = n;
        }
        return p;
    }
};