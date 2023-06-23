//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int mod=1e9+7;
    int totalWays(int n, int m, vector<vector<int>>& grid) {
        // Code here
        // if(m==1 && n==1) return 0;
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return helper(n-1,m-1,grid,dp)%mod;
    }
    int helper(int a,int b,vector<vector<int>> grid,vector<vector<int>> &dp){
        if(a<0 || b<0 || grid[a][b]==1) return 0;
        if(a==0 && b==0) return 1;
        
        int &ans=dp[a][b];
        if(ans!=-1) return ans;
        
        ans=helper(a-1,b,grid,dp)%mod+helper(a,b-1,grid,dp)%mod;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < m; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.totalWays(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends