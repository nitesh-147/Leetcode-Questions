class Solution {
public:
    int dp[501][501];

    int minInsertions(string s) {
        memset(dp, -1, sizeof(dp));
        return helper(0, s.size()-1, s);
    }

    int helper(int i, int j, string &s){
        if( i>=j ){
            return 0;
        }
        if( dp[i][j] == -1 ){
            if( s[i] == s[j] )
                dp[i][j] = helper(i+1, j-1, s);
            else
                dp[i][j] = min(helper(i+1, j, s), helper(i, j-1, s))+1;
        }
        return dp[i][j];
    }
};