class Solution {
public:
    int mod = pow(10,9)+7;

    int ways(string &s, int k, int index, vector<int>&dp){
        if(index>=s.size()) return 1;
        if(s[index]-'0' == 0) return 0;
        if(dp[index] != -1) return dp[index];
        int count = 0;
        long long total = 0;
        for(int i = index; i<s.size(); i++){
            int digit = s[i] - '0';
            total = total*10+digit;
            if(total >k) break;
            count += ways(s,k, i+1, dp);
            count %= mod;
        }

        return dp[index] = count%mod;
    }


    int solveTab(string &s, int k){
        int n = s.size();
        vector<int>dp(n+1, 0);
        dp[n] = 1;
        for(int i = n-1; i>-1; i--){
            long long total = 0;
            if(s[i] - '0' == 0) continue;
            for(int j = i; j<n; j++){
                int digit = s[j] - '0';
                total = total*10+digit;
                if(total>k) break;
                dp[i] += dp[j+1];
                dp[i] %= mod;
            }
        }

        return dp[0];
    }

    int numberOfArrays(string s, int k) {
        //vector<int>dp(s.size(), -1);
        //return ways(s, k, 0, dp);
        return solveTab(s,k);
    }
};