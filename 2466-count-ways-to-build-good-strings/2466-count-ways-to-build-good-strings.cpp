#define MOD int(1e9 + 7)

class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        int dp[high + 1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;

        for (int i = 0; i <= high; i++) {
            dp[i] += (i - zero >= 0) ? dp[i - zero] : 0;
            dp[i] %= MOD;
            dp[i] += (i - one >= 0) ? dp[i - one] : 0;
            dp[i] %= MOD;
        }

        int sum = 0;
        for (int i = low; i <= high; i++) {
            sum += dp[i];
            sum %= MOD;
        }
        return sum;
    }
};