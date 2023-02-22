class Solution {
public:
    void bfs(int i,vector<vector<int>>& g,vector<int> &visited,int &ans){
        ans++;
        visited[i]=1;
        queue<int> q;

        q.push(i);
        while(!q.empty()){
            i=q.front();
            q.pop();
        for(int j=0;j<g.size();j++){
           if(g[i][j]==1 && !visited[j]){
               visited[j]=1;
               q.push(j);
           }
        }
        }
    }
    int findCircleNum(vector<vector<int>>& c) {
        int n=c.size();
        vector<int> visited(n,0);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                bfs(i,c,visited,ans);
            }
        }
        return ans;
    }
};