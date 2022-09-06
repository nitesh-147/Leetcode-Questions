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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
           
            return false;
        }
         if(targetSum==root->val && root->right==NULL && root->left==NULL)
                return true;
        targetSum-=root->val;
        bool a=hasPathSum(root->left,targetSum);
        bool b=hasPathSum(root->right,targetSum);
        
        return a|b;
    }
};