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
    void helper(ListNode* &head, int &n){
        
        if(head==NULL){
            return;
        }
        
        helper(head->next,n);
        n--;
        if(n==0){
            if(head->next==NULL){
                head=head->next;
            }
            else{
                ListNode* temp=head->next;
                head->val=temp->val;
                head->next=temp->next;
                delete(temp);
            }
        }
        
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        helper(head,n);
        return head;
    }
};