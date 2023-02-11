class Solution {
public:
    int helper(vector<int>& coins, int amount,vector<int> &dp){
        if(amount == 0){
            return 0;
        }
        if(amount<0) return INT_MAX;
        if(dp[amount]!=-1) return dp[amount];
        int mn=INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans=helper(coins,amount-coins[i],dp);
            if(ans!=INT_MAX){
                mn=min(mn,ans+1);
            }
        }
        dp[amount]=mn;
        return mn;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        int ans= helper(coins,amount,dp);
        
        return ans==INT_MAX? -1:ans;
    }
};