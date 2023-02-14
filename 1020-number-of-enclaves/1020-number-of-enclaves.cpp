class Solution {
public:
    void dfs(int i,int j,int m,int n,vector<vector<int>> &vis,vector<vector<int>> &grid){
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        grid[i][j]=0;
        for(int k=0;k<4;k++){
            int r=i+dx[k];
            int c=j+dy[k];
            if(r>=0 && c>=0 && r<m && c<n && vis[r][c]==0 && grid[r][c]==1){
                vis[r][c]=1;
                dfs(r,c,m,n,vis,grid);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        
            for(int j=0;j<n;j++){
                if(vis[0][j]==0 && grid[0][j]==1){
                    vis[0][j]=1;
                    dfs(0,j,m,n,vis,grid);
                }
            }
            for(int j=0;j<n;j++){
                if(vis[m-1][j]==0 && grid[m-1][j]==1){
                    vis[m-1][j]=1;
                    dfs(m-1,j,m,n,vis,grid);
                }
            }
            for(int i=1;i<m-1;i++){
                if(grid[i][0]==1 && vis[i][0]==0){
                    vis[i][0]=1;
                    dfs(i,0,m,n,vis,grid);
                }
            }
            for(int i=1;i<m-1;i++){
                if(grid[i][n-1]==1 && vis[i][n-1]==0){
                    vis[i][n-1]=1;
                    dfs(i,n-1,m,n,vis,grid);
                }
            }
        
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                   ans++;
                }
            }
        }
        return ans;
    }
};