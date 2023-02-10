class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        queue<pair<pair<int,int>,int>> q;
        int c=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
                else c++;
            }
        }
      
        if(c==m*n || c==0) return -1;

        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};

        int ans=1;
    
        while(!q.empty()){
            int x=q.front().first.first;
            int y=q.front().first.second;
            int c=q.front().second;
            ans=max(ans,c);
            q.pop();
            for(int i=0;i<4;i++){
                 int nx=x+dx[i],ny=y+dy[i];
                 if(nx>=0 && nx<m && ny>=0 && ny<n &&!vis[nx][ny]){
                     vis[nx][ny]=1;
                     q.push({{nx,ny},c+1});
                 }
            }
        }
        return ans;
    }
};