class Solution {
public:
    int dp[501][501];
    int dfs(int i,int j,vector<int>& nums1, vector<int>& nums2)
    {
        if(i==nums1.size() || j==nums2.size()) return 0;

        if(dp[i][j]!=-1) return dp[i][j];
        if(nums1[i]==nums2[j])
        {
            return dp[i][j] =  1+dfs(i+1,j+1,nums1,nums2);
        }
        else
        {
            int take = dfs(i+1,j,nums1,nums2);
            int nottake = dfs(i,j+1,nums1,nums2);
            return dp[i][j] =  max(take,nottake);
        }
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        memset(dp,-1,sizeof(dp));
        return dfs(0,0,nums1,nums2);

    }
};