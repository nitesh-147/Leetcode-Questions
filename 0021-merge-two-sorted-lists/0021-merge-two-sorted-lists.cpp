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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // if(!list1)
        //     return list2;
        // if(!list2)
        //     return list1;
        
//         ListNode* temp=new ListNode(0);
//         ListNode* ans=temp;
//         // if(list1->val<list2->val)
//         //  temp=list1;
//         // else
//         //     temp=list2;
//         while(list1!=NULL && list2!=NULL){
//             if(list1->val>list2->val){
//                 // swap(list1,list2);
//                 ListNode* t=new ListNode(list2->val);
//                 ans->next=t;
//                 ans=ans->next;
//                 list2=list2->next;
               
//             }
//             else{
//                  ListNode* t=new ListNode(list1->val);
//                 ans->next=t;
//                 ans=ans->next;
//                 list1=list1->next;
//             }
//              // list1=list1->next;
                
                
//         }
//         // list1=list2;
//         if(list1!=NULL)
//             ans->next=list1;
        
//         if(list2!=NULL)
//             ans->next=list2;
        
        
//         return temp->next;
        if(!l1) return l2;
        if(!l2) return l1;
        
        if(l1->val > l2->val) swap(l1,l2);
        
        ListNode* res=l1;
        while(l1 && l2){
            ListNode* temp=NULL;
            while(l1 && l1->val<=l2->val){
                temp=l1;
                l1=l1->next;
            }
            temp->next=l2;
            swap(l1,l2);
        }
        return res;
    }
};