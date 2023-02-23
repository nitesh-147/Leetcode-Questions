class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        int ans=0;
        queue<int> q;
        q.push(0);
        vector<int> vis(n,0);
        vis[0]=1;
        vector<int> adj[n];
        vector<int> adj2[n];
        for(auto i:connections){
            adj[i[0]].push_back(i[1]);
            adj2[i[1]].push_back(i[0]);
        }
        // while(!q.empty()){
        //     cout<<q.front()<<" ";
        //     q.pop();
        // }
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(auto i:adj[x]){
                if(!vis[i]){
                    vis[i]=1;
                    ans++;
                    q.push(i);
                }
            }
            for(auto i:adj2[x]){
                if(!vis[i]){
                    vis[i]=1;
                    // ans++;
                    q.push(i);
                }
            }
        }
        return ans;
    }
};