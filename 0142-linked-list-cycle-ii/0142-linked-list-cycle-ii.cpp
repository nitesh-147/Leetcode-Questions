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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(head==NULL)
            return NULL;
        while(slow->val!=100001){
            if(slow->next==NULL)
                return NULL;
            slow->val=100001;
            slow=slow->next;
           
            
           
                
        }
        return slow;
    }
};