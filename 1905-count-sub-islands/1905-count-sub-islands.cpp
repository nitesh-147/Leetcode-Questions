class Solution {
public:
    void dfs(int i,int j,int m,int n,vector<vector<int>> &vis,vector<vector<int>>& grid1, vector<vector<int>>& grid2,bool &ans){
            int dx[]={1,-1,0,0};
            int dy[]={0,0,1,-1};
            if(grid1[i][j]!=1){
                ans=false;
            }
            for(int k=0;k<4;k++){
                int r=i+dx[k];
                int c=j+dy[k];
                if(r>=0 && c>=0 && r<m && c<n && !vis[r][c] && grid2[r][c]==1){
                    vis[r][c]=1;
                    dfs(r,c,m,n,vis,grid1,grid2,ans);
                }
            }
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2){
        int m=grid1.size(),n=grid1[0].size();
        int count=0;
        vector<vector<int>>vis (m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){ 
                if(grid2[i][j]==1 && !vis[i][j])
                {
                    vis[i][j]=1;
                    bool ans=true;
                    dfs(i,j,m,n,vis,grid1,grid2,ans);
                    if(ans) count++;
                }
            }
        }
         return count;
    }
};