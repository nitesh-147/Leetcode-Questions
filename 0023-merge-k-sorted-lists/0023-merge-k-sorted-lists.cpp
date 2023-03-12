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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>> p;
        for(auto i:lists){
            while(i){
                p.push(i->val);
                i=i->next;
            }
        }
        ListNode* ans=new ListNode();
        ListNode *temp=ans;

        while(!p.empty()){
            temp->next=new ListNode(p.top());
            temp=temp->next;
            p.pop();
        }


        return ans->next;
    }
};