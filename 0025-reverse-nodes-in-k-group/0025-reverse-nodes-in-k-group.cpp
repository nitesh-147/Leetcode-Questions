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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        // reverse(v.begin()+0,v.begin()+0+k);
        //  reverse(v.begin()+2,v.begin()+2+k);
        // for(auto i:v) cout<<i;
        for(int i=0;i<=v.size()-k;i+=k){
            reverse((v.begin()+i),(v.begin()+i+k));
            for(auto i:v) cout<<i;
            cout<<endl;
        }
        temp=head;
        for(auto i:v){
        temp->val=i;
        temp=temp->next;
        }
        return head;
    }
};