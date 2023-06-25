//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  vector<vector<vector<int>>> dp;
    int solve(int n, int m, vector<vector<int>>& grid) {
        // code here
        // int r=grid.size(),c=grid[0].size();
        dp.resize(n,vector<vector<int>>(m,vector<int>(m,-1)));
        return helper(0,0,m-1,grid);
    }
    int helper(int n,int i,int j,vector<vector<int>>& grid){
        if(i<0 || i>=grid[0].size() || j<0 || j>=grid[0].size()){
            return -10000;
        }
        if(n==grid.size()-1){
            if(i==j){
                return grid[n][i];
            }
            else return grid[n][i]+grid[n][j];
        }
        
        if(dp[n][i][j]!=-1) return dp[n][i][j];
        
        int maxi=INT_MIN;
        int value;
        if(i==j) value=grid[n][j];
        else value=grid[n][i]+grid[n][j];
        maxi=max(maxi,helper(n+1,i-1,j-1,grid));
        maxi=max(maxi,helper(n+1,i+1,j-1,grid));
        maxi=max(maxi,helper(n+1,i,j-1,grid));
        maxi=max(maxi,helper(n+1,i-1,j,grid));
        maxi=max(maxi,helper(n+1,i+1,j,grid));
        maxi=max(maxi,helper(n+1,i,j,grid));
        maxi=max(maxi,helper(n+1,i-1,j+1,grid));
        maxi=max(maxi,helper(n+1,i+1,j+1,grid));
        maxi=max(maxi,helper(n+1,i,j+1,grid));
        
        maxi+=value;
        
        return dp[n][i][j]=maxi;
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
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.solve(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends