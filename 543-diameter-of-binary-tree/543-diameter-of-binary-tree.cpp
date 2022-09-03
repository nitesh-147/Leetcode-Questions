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
    int height(TreeNode* root,int *h){
        if(root==NULL){
            *h=0;
            return 0;
        }
        int lh=0,rh=0;
       int left=height(root->left,&lh);
        int right=height(root->right,&rh);
        int curr=lh+rh+1;
        *h=max(lh,rh)+1;
        return max(curr,max(left,right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int h=0;
        return height(root,&h)-1;
    }
};