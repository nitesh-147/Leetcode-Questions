class Solution {
public:
    int helper(int m,int n,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(m==0 && n==0) return grid[0][0];
        if(m<0 || n<0) return INT_MAX;
        
        int &ans=dp[m][n];
        if(ans!=-1) return ans;
        
        ans=min(helper(m-1,n,grid,dp),helper(m,n-1,grid,dp));
        ans+=grid[m][n];
        
        return ans;  
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return helper(m-1,n-1,grid,dp);
    }
};