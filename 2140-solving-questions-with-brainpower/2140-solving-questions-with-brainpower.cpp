class Solution {
public:
   long long  f(int i, vector<vector<int>>& q , int n, vector<long long>&dp){
    
     if(i>=n)return 0;
     if(dp[i]==-1){
     long long a= q[i][0]+f(i+q[i][1]+1,q,n,dp);
     long long b= f(i+1,q,n,dp);
     return dp[i]=max(a,b);
     }
    else{
        return dp[i];
    }
    
}

long long mostPoints(vector<vector<int>>& questions) {
    int n=questions.size();
   vector<long long>dp(n,-1);
  return f(0,questions,n,dp);   
    }
};