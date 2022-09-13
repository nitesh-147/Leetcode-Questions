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
    void helper(TreeNode* root,vector<string> &ans,string s){
        s+=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            ans.push_back(s);
            return;
        }
        if(root->left){
            s+="->";
            helper(root->left,ans,s);
        }
        if(root->right){
            if(!root->left)
            s+="->";
            helper(root->right,ans,s);
        }
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s;
        helper(root,ans,s);
        return ans;
    }
};