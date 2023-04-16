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
    TreeNode* deleteNode(TreeNode* root, int key) {
          if(root==nullptr) return root;
        if(root->val > key){
            root->left=deleteNode(root->left,key);
        }
        else if(root->val < key){
            root->right=deleteNode(root->right,key);
        }
        else{
            TreeNode* par_temp=root->right;
            if(par_temp==nullptr) return root->left;

            else if(par_temp->left){
                TreeNode* temp=par_temp->left;
                while(temp->left){
                    par_temp=temp;
                    temp=temp->left;
                }
                par_temp->left=temp->right;
                temp->left=root->left;
                temp->right=root->right;
                return temp;
            }
            else{
                par_temp->left=root->left;
                return par_temp;
            }
        }
        return root;
    }
};