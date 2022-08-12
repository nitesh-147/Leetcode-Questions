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
   
    void lorder(TreeNode* root,vector<vector<int>> &v){
        if(root==NULL)
            return;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
         int i=0;
        vector<int> t;
         while(!q.empty()){
        TreeNode* temp=q.front();
        q.pop();
        if(temp!=NULL){
           t.push_back(temp->val);
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
        else{
            v.push_back(t);
            if(q.empty())
            break;
            else{
                t={};
                q.push(NULL);
                i++;
            }
                
            
        }
    }
        
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lorder(root,ans);
        return ans;
    }
};