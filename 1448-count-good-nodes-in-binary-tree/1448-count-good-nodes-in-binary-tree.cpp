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
    int ans=0;
    
    void helper(TreeNode* root,int maxx){
        if(root==NULL)
            return;
        if(root->val >= maxx){
            maxx=root->val;
            ans++;
        }
        helper(root->left,maxx);
        helper(root->right,maxx);
    }
    
    int goodNodes(TreeNode* root) {
        int maxx=root->val;
        helper(root,maxx);
        
        return ans;
    }
};