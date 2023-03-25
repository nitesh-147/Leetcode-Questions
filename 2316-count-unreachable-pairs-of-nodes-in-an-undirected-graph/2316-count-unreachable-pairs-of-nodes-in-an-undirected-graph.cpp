class Solution {
public:
    void dfs(int i,long long &curr,vector<int> adj[],vector<bool> &vis){
        curr++;
        for(auto j:adj[i]){
            if(!vis[j]){
                vis[j]=true;
                dfs(j,curr,adj,vis);
            }
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        long long  temp=n;
        long long ans=0;
        vector<int> adj[n];
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                long long curr=0;
                vis[i]=true;
                dfs(i,curr,adj,vis);
                temp-=curr;
                ans+= curr * temp;
            }
        }
        
        return ans;
    }
};