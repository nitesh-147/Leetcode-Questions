/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        
        vector<int> temp;
        while(!q.empty()){
            Node* f=q.front();
            q.pop();
            if(f!=NULL){
                temp.push_back(f->val);
                
                for(auto i:f->children){
                    q.push(i);
                }
            }
            else{
                ans.push_back(temp);
                temp.clear();
                if(!q.empty())
                    q.push(NULL);
            }
        }
        return ans;
    }
};