class Solution {
public:
    int helper(vector<vector<int>>& g,vector<vector<int>>& dp,int x=0,int y=0){
        if(x>=g.size()||y>=g[0].size()||g[x][y]==1) return 0;

        if(x==g.size()-1 && y==g[0].size()-1) return 1;
        if(dp[x][y]!=-1) return dp[x][y];

        // g[x][y]=1;
        
        int total=helper(g,dp,x+1,y)+helper(g,dp,x,y+1);

        // g[x][y]=0;
        dp[x][y]=total;

        return total;  
    }
    int uniquePathsWithObstacles(vector<vector<int>>& g,int x=0,int y=0) {
             vector<vector<int>> dp(g.size(),vector<int>(g[0].size(),-1));       
            return helper(g,dp);
    }
};