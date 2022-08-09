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
    int idx;
     TreeNode* build(vector<int>& inorder, vector<int>& postorder,int st,int end){
        if(st>end)
            return NULL;
        
        int curr=postorder[idx--];
        TreeNode* root=new TreeNode(curr);
        
        int pos=std::find (inorder.begin()+st, inorder.begin()+end, curr)-inorder.begin();
         root->right=build(inorder,postorder,pos+1,end);
        root->left=build(inorder,postorder,st,pos-1);
        
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        idx=postorder.size()-1;
        return build(inorder,postorder,0,postorder.size()-1);
    }
};