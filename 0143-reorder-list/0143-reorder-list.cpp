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
void helper(ListNode* head,vector<int> &v){
      ListNode* temp=head;
      while(temp!=NULL){
           v.push_back(temp->val);
           temp=temp->next;
      }
} 
    void reorderList(ListNode* head) {
        vector<int> v;
        helper(head,v);
        ListNode* temp=head;
        int i,n=v.size();
        for(i=0;i<n/2;i++){
            temp->val=v[i];
            temp->next->val=v[n-i-1];
            temp=temp->next->next;
        }
        if(n&1) temp->val=v[i];

        // return head;
    }
};