class Solution {
public:
    vector<pair<int,int>> d={{1,0},{-1,0},{0,1},{0,-1}};
    void dfs(int x,int y,int m,int n,int prev,vector<vector<int>>& heights,vector<vector<bool>>& vis){
        if(x<0||x>=m||y<0||y>=n||vis[x][y]) return;
        if(heights[x][y]<prev) return;
        vis[x][y]=true;
        for(int i=0;i<4;i++){
            dfs(x+d[i].first,y+d[i].second,m,n,heights[x][y],heights,vis);
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m=heights.size(),n=heights[0].size();
        // vector<vector<bool>> vis(m,vector<bool>(n,0));
        vector<vector<bool>> ps(m,vector<bool>(n,0));
        vector<vector<bool>> at(m,vector<bool>(n,0));
        
        for(int i=0;i<m;i++){
            dfs(i,0,m,n,INT_MIN,heights,ps);
            dfs(i,n-1,m,n,INT_MIN,heights,at);
        }
        for(int i=0;i<n;i++){
            dfs(0,i,m,n,INT_MIN,heights,ps);
            dfs(m-1,i,m,n,INT_MIN,heights,at);
        }
        
        vector<vector<int>> ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ps[i][j] && at[i][j]) ans.push_back({i,j});
            }
        }
        return ans;
    }
};