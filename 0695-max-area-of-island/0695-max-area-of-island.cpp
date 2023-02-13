class Solution {
public:
    void dfs(int i,int j,vector<vector<int>> &vis,vector<vector<int>> grid,int &curr){
        // cout<<i<<" "<<j<<endl;
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        curr++;
        int m=grid.size(),n=grid[0].size();
        for(int k=0;k<4;k++){
            int r=i+dx[k];
            int c=j+dy[k];
            if(r>=0 && c>=0 && r<m && c<n && !vis[r][c] && grid[r][c]==1)
            {
                vis[r][c]=1;
                dfs(r,c,vis,grid,curr);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int ans=0;
        vector<vector<int>> vis(m,vector<int>(n,0));
        if(grid==vis)return 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(!vis[i][j] && grid[i][j]==1){
                   vis[i][j]=1;
                   int curr=0;
                   dfs(i,j,vis,grid,curr);
                   cout<<i<<" "<<j<<" "<<curr<<endl;
                   ans=max(ans,curr);
               } 
            }
        }
        // dfs(0,7,vis,grid,ans);
        return ans;
    }
};