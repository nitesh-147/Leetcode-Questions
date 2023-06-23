class Solution {
public:
    int helper(vector<vector<int>> &grid,vector<vector<int>> &dp,int x,int y){
        if(x<0 || y<0 || grid[x][y]==1) return 0;
        if(x==0 && y==0) return 1;
        
        
        int &ans=dp[x][y];
        if(ans!=-1) return ans;
        
        ans=helper(grid,dp,x-1,y)+helper(grid,dp,x,y-1);
        return ans;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));       
        return helper(grid,dp,m-1,n-1);
    }
};