class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        
        return helper(n-1,amount,coins,dp);
    }
    
    int helper(int n,int amount,vector<int> &coins,vector<vector<int>>& dp){
        if(amount==0) return 1;
        if(n<0) return 0;
        
        if(dp[n][amount]!=-1) return dp[n][amount];
        
        int notPick=helper(n-1,amount,coins,dp);
        int pick=0;
        if(amount>=coins[n]){
            pick=helper(n,amount-coins[n],coins,dp);
        }
        return dp[n][amount]=pick+notPick;
    }
};