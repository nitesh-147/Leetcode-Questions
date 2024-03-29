//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        vector<int> dp(n,-1);
        return helper(n-1,height,dp);
    }
   private:
   int helper(int n,vector<int>& height,vector<int> &dp){
       if(n==0) return 0;
       if(dp[n]!=-1) return dp[n];
       
       int mn=abs(height[n]-height[n-1])+helper(n-1,height,dp);
       if(n-2>=0){
           mn=min(mn,abs(height[n]-height[n-2])+helper(n-2,height,dp));
       }
       
       return dp[n]=mn;
   }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends