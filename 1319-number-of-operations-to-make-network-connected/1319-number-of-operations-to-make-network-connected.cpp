class Solution {
public:
    void dfs(int i,vector<int> adj[],vector<bool> &vis){
        for(auto j:adj[i]){
            if(!vis[j]){
                vis[j]=true;
                dfs(j,adj,vis);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& c) {
        if(c.size()<n-1) return -1;
        // int ans=0;
        vector<int> adj[n];
        for(auto i:c){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<bool> vis(n,false);
        int ans=-1;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                vis[i]=true;
                dfs(i,adj,vis);
                ans++;
            }
        }
        return ans;
    }
};