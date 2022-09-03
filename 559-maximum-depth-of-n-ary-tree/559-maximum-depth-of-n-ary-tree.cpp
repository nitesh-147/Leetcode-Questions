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
    // int m=0;
    int maxDepth(Node* root) {
        if(root==NULL)
            return 0;
        int m=0;
        for(auto i : root->children){
            m=max(m,maxDepth(i));
        }
        return m+1;
    }
};