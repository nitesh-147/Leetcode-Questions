//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    vector<vector<int>> dp;
    int helper(vector<vector<int>>& points, int n){
        dp[0]=points[0];
        for(int i=1;i<=n;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    if(j!=k){
                        dp[i][j]=max(dp[i][j],dp[i-1][k]);
                    }
                }
                dp[i][j]+=points[i][j];
            }
        }
        int ans=-1;
        for(int i=0;i<3;i++){
            ans=max(ans,dp[n][i]);
        }
        return ans;
    }
  public:
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        dp.resize(n,vector<int>(3,INT_MIN));
        return helper(points,n-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends