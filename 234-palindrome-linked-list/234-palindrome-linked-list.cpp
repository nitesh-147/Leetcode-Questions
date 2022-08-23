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
    void iter(ListNode* head,vector<int> &v){
         ListNode* temp=head;
         while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
            
        }
    }
    
    void rev(ListNode* head,vector<int> &v){
        if(head==NULL)
            return ;
         rev(head->next,v);
        v.push_back(head->val);
    }
    
    bool isPalindrome(ListNode* head) {
        // ListNode* temp=head;
        vector<int> v,r;
        iter(head,v);
        rev(head,r);
        if(r==v)
            return true;
        else
            return false;
    }
};