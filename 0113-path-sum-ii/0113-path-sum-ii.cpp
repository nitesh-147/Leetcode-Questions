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
  void helper(TreeNode* root,int t,vector<vector<int>> &ans,vector<int> temp){
      if(root==NULL) return;
      t-=root->val;
      temp.push_back(root->val);
      if(!root->left && !root->right && t==0)
      ans.push_back(temp);

      helper(root->left,t,ans,temp);
      helper(root->right,t,ans,temp);
  }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(root,targetSum,ans,temp);
        return ans;
    }
};