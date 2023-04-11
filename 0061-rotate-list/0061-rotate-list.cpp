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
        if(!head) return head;
        int count=0;
        ListNode* temp=head;
        ListNode* end;
        while(temp!=NULL){
            end=temp;
            count++;
            temp=temp->next;
        }
        k%=count;
        if(k==0){
            return head;
        }
        else{
            int x=count-k;
            temp=head;
            x--;
            while(x--){
                temp=temp->next;
            }
            end->next=head;
            head=temp->next;
            temp->next=NULL;
            return head;
        }
    }
};