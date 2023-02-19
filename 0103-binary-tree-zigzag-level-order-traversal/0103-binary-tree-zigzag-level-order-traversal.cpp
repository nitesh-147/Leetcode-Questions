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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int id=0;
        vector<int> temp;
        while(!q.empty()){
           TreeNode* x=q.front();
           q.pop();
           if(x!=NULL){
               temp.push_back(x->val);
               if(x->left!=NULL)
               q.push(x->left);
               if(x->right!=NULL)
               q.push(x->right);
           }
           else{
               if(id&1)
               reverse(temp.begin(),temp.end());

               ans.push_back(temp);
               temp.clear();

               if(!q.empty()){
                   q.push(NULL);
               }
               id++;
           }
        }
        return ans;
    }
};