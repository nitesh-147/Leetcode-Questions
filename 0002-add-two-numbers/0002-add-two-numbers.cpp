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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a=new ListNode(),*b=a;
        int carr=0;
        while(l1!=NULL && l2!=NULL) {
            a->next=new ListNode((l1->val+l2->val+carr)%10);
            carr=(l1->val+l2->val+carr)/10;
            l1=l1->next;
            l2=l2->next;
            a=a->next;
        }
        while(l1!=NULL) {
             a->next=new ListNode((l1->val+carr)%10);
            carr=(l1->val+carr)/10;
            l1=l1->next;
            a=a->next;
        }
        while(l2!=NULL) {
             a->next=new ListNode((l2->val+carr)%10);
            carr=(l2->val+carr)/10;
            l2=l2->next;
            a=a->next;
        }
        if(carr>0) {
            a->next=new ListNode(carr);
        }
        return b->next;
    }
};