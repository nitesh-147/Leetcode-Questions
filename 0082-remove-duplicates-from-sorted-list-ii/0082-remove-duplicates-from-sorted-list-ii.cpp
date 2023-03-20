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
        if(head==NULL || head->next==NULL) return head;
        ListNode *curr=head;
        unordered_map<int,int> m;
        while(curr!=NULL){
            m[curr->val]++;
            curr=curr->next;
        }
        
        while(head!=NULL && m[head->val]>1) head=head->next;
         if(head==NULL || head->next==NULL) return head;
        curr=head->next;
        ListNode* prev=head;
        while(curr!=NULL){
             if(m[curr->val]>1){
                  if(curr->next==NULL){
                      prev->next=NULL;
                      break;
                  }
                  else{
                      curr->val=curr->next->val;
                      curr->next=curr->next->next;
                  }
             }
             else{
                 prev=prev->next;
                curr=curr->next;
              }
             }
             
          return head;
    }
};