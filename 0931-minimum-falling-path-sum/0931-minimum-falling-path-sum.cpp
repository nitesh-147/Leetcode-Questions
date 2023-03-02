class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            dp[0][i]=matrix[0][i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int minimum=INT_MAX;
                for(int k=j-1;k<=j+1;k++){
                    if(k>=0 && k<n){
                        minimum=min(minimum,dp[i-1][k]);
                    }
                }
                dp[i][j]=minimum+matrix[i][j];
            }
        }
        
        return *min_element(dp.back().begin(),dp.back().end());
    }
};