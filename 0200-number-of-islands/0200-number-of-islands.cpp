class Solution {
public:
    void dfs(int i,int j,vector<vector<int>> &vis,vector<vector<char>> grid){
        int m=grid.size(),n=grid[0].size();
        int dx[]={1,-1,0,0};
        int dy[]={0,0,-1,1};
         queue<pair<int,int>> q;
         q.push({i,j});

         while(!q.empty()){
             int r=q.front().first;
             int c=q.front().second;
             q.pop();
             for(int i=0;i<4;i++){
                 int nr=r+dx[i];
                 int nc=c+dy[i];
                 if(nr>=0 && nc>=0 && nr<m && nc<n && grid[nr][nc]=='1' && vis[nr][nc]==0){
                     vis[nr][nc]=1;
                     q.push({nr,nc});
                 }
             }
         }

    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size();
        // int dx[]={1,-1,0,0};
        // int dy[]={0,0,-1,1};
        vector<vector<int>> vis(m,vector<int>(n,0));
        // queue<pair<int,int>> q;
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                 if(grid[i][j]=='1' && vis[i][j]==0){
                     ans++;
                     vis[i][j]=1;
                     dfs(i,j,vis,grid);
                 }
            }
        }

       return ans;
    }
};