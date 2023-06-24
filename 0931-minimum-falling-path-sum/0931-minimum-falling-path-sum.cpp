class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));
        
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            ans=min(ans,helper(matrix,n-1,i,dp));
        }
        
        return ans;
    }
    int helper(vector<vector<int>> &matrix,int i,int j,vector<vector<int>> &dp){
       
        if(j<0 || j>=matrix.size()) return 1e8;
         if(i==0) return matrix[i][j];
        
        int &ans=dp[i][j];
        if(ans!=INT_MAX) return ans;
        
        ans=matrix[i][j]+min(helper(matrix,i-1,j,dp),min(helper(matrix,i-1,j+1,dp),helper(matrix,i-1,j-1,dp)));
        
        return ans;
    }
};