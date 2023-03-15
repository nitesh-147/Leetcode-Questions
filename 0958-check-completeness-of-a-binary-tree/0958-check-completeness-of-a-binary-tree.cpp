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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool check=false;
        while(!q.empty()){
            int size=q.size();
            
            while(size--){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left && check){
                   return false;
                }
                else if(curr->left){
                     q.push(curr->left);
                }
                else{
                    check=true;
                }
                
                if(curr->right && check){
                    return false;
                }
                else if(curr->right){
                   q.push(curr->right);
                }
                else{
                    check=true;
                }
                
            }
            
           
            
        }
         return true;
    }
};