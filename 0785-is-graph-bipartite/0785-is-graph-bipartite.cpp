class Solution {
public:
    bool isBipartite(vector<vector<int>>& adj) {
        int n=adj.size();
         vector<int> color(n,0);
        for(int i=1;i<n;i++){
            if(color[i]==0){
                queue<int> q;
                color[i]=1;
                q.push(i);
                while(!q.empty()){
                    int x=q.front();
                    q.pop();
                    for(auto j:adj[x]){
                        if(color[x]==color[j]) return false;
                        if(color[j]==0){
                            color[j]=-color[x];
                            q.push(j);
                        } 
                    }
                }
            }
        }
        return true;
    }
};