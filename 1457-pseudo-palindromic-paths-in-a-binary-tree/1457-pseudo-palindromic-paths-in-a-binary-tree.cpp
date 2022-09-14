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
    void helper(TreeNode* root, vector<int> m,int &ans){
        if(root==NULL)
            return;
        m[root->val]++;
        if(root->left==NULL && root->right==NULL){
            int oc=0;
            for(auto i:m){
                if(i%2!=0)
                    oc++;
                if(oc>1)
                    return;
            }
            // if(oc<2)
                ans++;
        }
        
        helper(root->left,m,ans);
        helper(root->right,m,ans);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> v(10,0);
        int ans=0;
        helper(root,v,ans);
        return ans;
    }
};