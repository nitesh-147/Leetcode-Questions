class Solution {
public:
    int integerBreak(int n) {
       vector<int> dp(n+1);
       dp[0]=dp[1]=dp[2]=1;
        if(n<=2) return dp[2];
        dp[3]=2;
        for(int i=4;i<=n;i++){
            for(int j=1;j<=i;j++){
                dp[i]=max({dp[i],dp[j]*dp[i-j],dp[j]*(i-j),j*dp[i-j],j*(i-j)});
            }
        }
        return dp[n];
    }
};