class Solution {
public:
    int helper(int m,int n,string& s,string& t,vector<vector<int>>& dp){
        if(m<0 || n<0) return 0;
        
        if(dp[m][n]!=-1) return dp[m][n];
        
        if(s[m]==t[n])
            return dp[m][n]=1+helper(m-1,n-1,s,t,dp);
        else
            return dp[m][n]=max(helper(m-1,n,s,t,dp),helper(m,n-1,s,t,dp));  
        
    }
    int longestPalindromeSubseq(string s) {
        string text1=s;
        reverse(s.begin(),s.end());
        string text2=s;
        int m=text1.size(),n=text2.size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return helper(m-1,n-1,text1,text2,dp);
    }
};