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
        stack<int> s1,s2;
        while(l1){
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2){
            s2.push(l2->val);
            l2=l2->next;
        }
        stack<int> s;
        int c=0;
        while(!s1.empty() && !s2.empty()){
            int temp=s1.top()+s2.top()+c;
            s1.pop();
            s2.pop();
            s.push(temp%10);
            c=temp/10;
        }
        while(!s1.empty()){
            int temp=s1.top()+c;
            s1.pop();
            // s2.pop();
            s.push(temp%10);
            c=temp/10;
        }
         while(!s2.empty()){
            int temp=s2.top()+c;
            s2.pop();
            // s2.pop();
            s.push(temp%10);
            c=temp/10;
        }
        if(c==1) s.push(1);
        
        if(s.empty()) return NULL;
        
        ListNode* t=new ListNode(s.top());
        s.pop();
        ListNode* ans=t;
        while(!s.empty()){
            t->next=new ListNode(s.top());
            t=t->next;
            s.pop();
        }
        return ans;
    }
};