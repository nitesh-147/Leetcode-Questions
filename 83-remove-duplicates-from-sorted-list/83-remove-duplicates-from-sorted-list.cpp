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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *prev=head,*curr=head->next,*nxt;
        while(curr!=NULL){
            nxt=curr->next;
            if(curr->val==prev->val){
                ListNode* temp=curr;
                prev->next=curr->next;
                curr=curr->next;
                delete temp;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};