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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1=0,c2=0;
        ListNode* temp1=headA,*temp2=headB;
        while(temp1!=NULL)
        {
            c1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            c2++;
            temp2=temp2->next;
        }
        if(c1>c2){
            int temp=c1-c2;
            while(temp--)
                headA=headA->next;
        }
        else{
             int temp=c2-c1;
            while(temp--)
                headB=headB->next;
        }
        while(headA!=headB && (headA!=NULL && headB!=NULL)){
            headA=headA->next;
            headB=headB->next;
        }
        if(headA==headB)
            return headA;
        else 
            return NULL;
    }
};