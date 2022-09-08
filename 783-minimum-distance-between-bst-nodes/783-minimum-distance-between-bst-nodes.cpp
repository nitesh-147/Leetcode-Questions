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
    int m=INT_MAX,prev=-1;
    void helper(TreeNode* root){
        if(!root)
            return;
        // if(root->left)
        //     m=min(abs(root->val-root->left->val),m);
        // if(root->right)
        //     m=min(abs(root->val-root->right->val),m);
        
        helper(root->left);
        
        if(prev>=0)m=min(m,root->val-prev);
        prev=root->val;
        helper(root->right);
        
        
    }
    int minDiffInBST(TreeNode* root) {
        helper(root);
        return m;
    }
};