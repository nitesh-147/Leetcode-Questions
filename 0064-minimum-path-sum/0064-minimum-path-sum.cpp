class Solution {
public:
    int helper(int x,int y,int m,int n,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(x<0 || x>=m || y<0 || y>=n) return INT_MAX;
        if(x==m-1 && y==n-1) return grid[x][y];
        
        int &ans=dp[x][y];
        if(ans!=-1) return ans;
        ans=min(helper(x,y+1,m,n,grid,dp),helper(x+1,y,m,n,grid,dp))+grid[x][y];
        return ans;
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        
        return helper(0,0,m,n,grid,dp);
    }
};