//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minCost(vector<vector<int>> &costs) {
        // write your code here
        int n=costs.size(),k=costs[0].size();
        if(n==1 && k==1) return costs[0][0];
        if(k==1) return -1;
        if(n==0 && k==0) return 0;
        vector<vector<int>> dp(n,vector<int>(k,INT_MAX));
        for(int i=0;i<k;i++){
            dp[0][i]=costs[0][i];
        }
        for(int i=1;i<n;i++){
            int mn1=dp[i-1][0],mn1_ind=0;
            for(int x=1;x<k;x++){
                if(dp[i-1][x]<mn1){
                    mn1=dp[i-1][x];
                    mn1_ind=x;
                }
            }
            int mn2=INT_MAX;
            for(int x=0;x<k;x++){
                if(x!=mn1_ind){
                    mn2=min(mn2,dp[i-1][x]);
                }
            }
            for(int j=0;j<k;j++){
                if(j!=mn1_ind)
                dp[i][j]=mn1+costs[i][j];
                else
                dp[i][j]=mn2+costs[i][j];
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<k;i++){
            ans=min(ans,dp[n-1][i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> costs(n, vector<int>(k));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) cin >> costs[i][j];
        }
        Solution obj;
        cout << obj.minCost(costs) << endl;
    }
}
// } Driver Code Ends