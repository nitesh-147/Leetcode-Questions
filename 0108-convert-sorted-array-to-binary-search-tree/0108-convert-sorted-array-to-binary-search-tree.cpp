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
    TreeNode* root;
    void helper(TreeNode* &root,vector<int> nums,int l,int r){
        if(l>r)
            return;
        if(l==r)
        {
            root=new TreeNode(nums[l]);
            return;
        }
        int m=l+(r-l)/2;
        root=new TreeNode(nums[m]);
        helper(root->left,nums,l,m-1);
        helper(root->right,nums,m+1,r);
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        helper(root,nums,0,nums.size()-1);
        return root;
    }
};