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
    int idx=0;
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int st,int end){
        if(st>end)
            return NULL;
        
        int curr=preorder[idx++];
        TreeNode* root=new TreeNode(curr);
        
        int pos=std::find (inorder.begin()+st, inorder.begin()+end, curr)-inorder.begin();
        root->left=build(preorder,inorder,st,pos-1);
        root->right=build(preorder,inorder,pos+1,end);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder,inorder,0,preorder.size()-1);
    }
};