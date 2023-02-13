class Solution {
public:
    void dfs(int i,int j,int m,int n,vector<vector<int>> &vis,vector<vector<int>> grid){
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
          
        for(int k=0;k<4;k++){
            int r=i+dx[k];
            int c=j+dy[k];

            if(r>=0 && c>=0 && r<m && c<n && grid[r][c]==0 && vis[r][c]==0){
                vis[r][c]=1;
                dfs(r,c,m,n,vis,grid);
            }
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]==0 && grid[i][j]==0 && (i==0 || i==m-1 || j==0 || j==n-1)){
                      vis[i][j]=1;
                      dfs(i,j,m,n,vis,grid);
                }
            }
        }
        for(auto i:vis){
            for(auto j:i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]==0 && grid[i][j]==0){
                    // cout<<i<<" "<<j<<endl;
                    ans++;
                    vis[i][j]=1;
                    dfs(i,j,m,n,vis,grid);
                }
            }
        }
        return ans;
    }
};