class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        list<int> adj[n+1];
        for(auto i:dislikes){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
       vector<int> color(n+1,0);
        for(int i=1;i<=n;i++){
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