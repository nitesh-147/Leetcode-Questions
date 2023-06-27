class Solution {
public:
    int helper(int n,int amount,vector<int> &coins,vector<vector<int>>& dp){
       
        if(n==0){
            if(amount%coins[0]==0) return amount/coins[0];
            else return 1e9;
        }
        
        if(dp[n][amount]!=-1) return dp[n][amount];
        
        int notPick=helper(n-1,amount,coins,dp);
        int pick=INT_MAX;
        if(amount>=coins[n]){
            pick=1+helper(n,amount-coins[n],coins,dp);
        }
        return dp[n][amount]=min(pick,notPick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans= helper(n-1,amount,coins,dp);
        return ans<1e9? ans:-1;
    }
};