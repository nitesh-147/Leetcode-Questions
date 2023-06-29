class Solution {
public:
    int lcsUtil(string& s1, string& s2, int ind1, int ind2,  vector<vector<int>>& dp){

    if(ind1<0 || ind2<0)
        return 0;
        
    if(dp[ind1][ind2]!=-1)
        return dp[ind1][ind2];
    
    if(s1[ind1] == s2[ind2])
        return dp[ind1][ind2] = 1 + lcsUtil(s1,s2,ind1-1,ind2-1,dp);
    
    else 
        return dp[ind1][ind2] = 0 + max(lcsUtil(s1,s2,ind1,ind2-1,dp),lcsUtil
       (s1,s2,ind1-1,ind2,dp));
   
}
    int helper(int m,int n,string& s,string& t,vector<vector<int>>& dp){
        if(m<0 || n<0) return 0;
        
        if(dp[m][n]!=-1) return dp[m][n];
        
        if(s[m]==t[n])
            return dp[m][n]=1+helper(m-1,n-1,s,t,dp);
        else
            return dp[m][n]=max(helper(m-1,n,s,t,dp),helper(m,n-1,s,t,dp));
        
        
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(),n=text2.size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return helper(m-1,n-1,text1,text2,dp);
    }
};