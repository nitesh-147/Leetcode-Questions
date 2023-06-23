class Solution {
    private:
    vector<vector<int>> dp;
    int helper(int a,int b){
        if(a==0 && b==0) return 1;
        if(a<0 || b<0) return 0;
        
        int &ans=dp[a][b];
        if(ans!=-1) return ans;
        
        ans=helper(a-1,b)+helper(a,b-1);
        return ans;
    }
public:
    int uniquePaths(int m, int n) {
        dp.resize(m,vector<int>(n,-1));
        return helper(m-1,n-1);
    }
};