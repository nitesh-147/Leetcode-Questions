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
    bool helper(TreeNode* rootl,TreeNode* rootr){
        if(rootl==NULL && rootr==NULL) return true;
        if(rootl==NULL || rootr==NULL) return false;
        
        if(rootl->val!=rootr->val) return false;
        return helper(rootl->left,rootr->right) & helper(rootl->right,rootr->left);
    }
    bool isSymmetric(TreeNode* root) {
        return helper(root->left,root->right);
    }
};