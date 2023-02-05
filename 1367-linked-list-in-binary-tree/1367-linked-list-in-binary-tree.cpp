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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool ans=false;
    bool match(ListNode* head, TreeNode* root){
        if(!head) return true;
        else if(!root) return false;
        else{
            if(head->val != root->val) return false;
            else return match(head->next,root->left) || match(head->next,root->right);
        }
    }
    void helper(ListNode* head, TreeNode* root){
        if(root){
            helper(head,root->left);
            bool x=match(head,root);
            if(x) ans=x;
            helper(head,root->right);
        }
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        helper(head,root);
        return ans;
    }
};