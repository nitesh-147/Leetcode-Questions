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
    bool match(TreeNode* root, TreeNode* subRoot){
        if(!root && !subRoot) return true;
        else if(root && subRoot){
            if(root->val != subRoot->val) return false;
            else return match(root->left, subRoot->left) && match(root->right, subRoot->right);
        }
        else return false;
    }
    void inorder(TreeNode* root, TreeNode* subRoot){
        if(root){
            inorder(root->left,subRoot);
            bool x=match(root,subRoot);
            if(x) ans=x;
            inorder(root->right,subRoot);
        }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
       inorder(root,subRoot);
       return ans;
    }
};