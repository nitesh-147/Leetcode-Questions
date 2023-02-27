class Solution {
public:
    
    // int nWays(string s,int i,vector<int> &dp){
    //     if(s[i]=='0')return 0;
    //     else if(i>=s.size()-1) return 1;
    //     else if(dp[i]!=-1) return dp[i];
    //     else if(s[i]=='1'|| (s[i]=='2' && s[i+1]>='0' && s[i+1]<='6')) return dp[i]=(nWays(s,i+1,dp)+nWays(s,i+2,dp));
    //     else return dp[i]=nWays(s,i+1,dp);
    // }
   
    int nWays(string s,int i,vector<int> &dp){
        if(s[i]=='0')return 0;
        else if(i>=s.size()-1) return 1;
        else if(dp[i]!=-1) return dp[i];
        else if(s[i]=='1'|| (s[i]=='2' && s[i+1]>='0' && s[i+1]<='6')) return dp[i]=(nWays(s,i+1,dp)+nWays(s,i+2,dp));
        else return dp[i]=nWays(s,i+1,dp);
    }
   
    int numDecodings(string s) {
        vector<int> dp(s.size(),-1);
       return nWays(s,0,dp);
    }
};