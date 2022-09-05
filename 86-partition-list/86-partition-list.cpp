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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *a=new ListNode(0),*b=new ListNode(0),*c=a,*d=b;
        while(head!=NULL){
            if(head->val<x)
            {
                // swap(a->val,b->val);
                a->next=new ListNode(head->val);
                a=a->next;
            }
            else{
                b->next=new ListNode(head->val);
                b=b->next;
            }
            head=head->next;
        }
        a->next=d->next;
        return c->next;
    }
};