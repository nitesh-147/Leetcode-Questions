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
    void helper(TreeNode* root,int &ans,string s){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            s+=(to_string(root->val));
            int temp=0,x=0;
            for(int i=s.size()-1;i>=0;i--){
                temp=temp+((pow(2,x++))*(s[i]-'0'));
            }
            cout<<s<<" "<<temp<<endl;
            ans+=temp;
            return;
        }
        
        s+=(to_string(root->val));
        helper(root->left,ans,s);
         helper(root->right,ans,s);
    }
    int sumRootToLeaf(TreeNode* root) {
        int ans=0;
        string s="";
        helper(root,ans,s);
       return ans;
        
    }
};