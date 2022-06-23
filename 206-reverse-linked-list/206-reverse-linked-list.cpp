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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        
        else{
            ListNode* a,*b,*c;
            a=head;
            b=a->next;
            a->next=NULL;
            while(b!=NULL){
                c=b->next;
                b->next=a;
                a=b;
                b=c;
            }
            return a;
        }
    }
};