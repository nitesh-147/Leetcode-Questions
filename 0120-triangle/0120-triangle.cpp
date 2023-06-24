class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return helper(triangle,0,0,dp);
    }
    
    int helper(vector<vector<int>>& triangle,int n,int i,vector<vector<int>>& dp){
       if(n==triangle.size()-1) return triangle[n][i];
        int &ans=dp[n][i];
        if(ans!=-1) return ans;
        ans=triangle[n][i]+min(helper(triangle,n+1,i,dp),helper(triangle,n+1,i+1,dp));
        return ans;
    }
};