class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<int> adj[n+1];
        for(auto i:roads){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<bool> vis(n+1,false);
        vis[1]=true;
        queue<int> q;
        q.push(1);
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(auto i:adj[x]){
                if(!vis[i]){
                    vis[i]=true;
                    q.push(i);
                }
            }
        }
        int ans=INT_MAX;
        for(auto i:roads){
            if(vis[i[0]]){
                ans=min(ans,i[2]);
            }
        }
        return ans;
    }
};