class Solution {
public:
    vector<int> dp;
    int climbStairs(int n) {
        dp.resize(n+1,-1);
        return helper(n);
    }
    
private:
    int helper(int n){
        if(n<=1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=helper(n-1)+helper(n-2);
    }
};