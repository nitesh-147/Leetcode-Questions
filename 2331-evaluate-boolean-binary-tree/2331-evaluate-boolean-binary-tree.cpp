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
    void helper(TreeNode* root){
        if(root->left ==NULL and root->right==NULL)
            return;
        helper(root->left);
        helper(root->right);
        if(root->val==2){
            root->val=max(root->right->val,root->left->val);
        }
        else
            root->val=min(root->right->val,root->left->val);
    }
    bool evaluateTree(TreeNode* root) {
        helper(root);
        
        return root->val;
    }
};