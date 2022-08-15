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
    void solve(TreeNode* root,TreeNode* &temp){
        if(!root)
            return;
        
        solve(root->left,temp);
        TreeNode* t=new TreeNode(root->val);
        temp->right=t;
        temp=temp->right;
        solve(root->right,temp);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* temp;
        TreeNode* ans=new TreeNode();
        temp=ans;
        
       solve(root,ans);
        
        return temp->right;
    }
};