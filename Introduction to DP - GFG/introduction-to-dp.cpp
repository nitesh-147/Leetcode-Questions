//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  vector<long long> dp;
  const int mod=1e9+7;
    long long int topDown(int n) {
        // code here
        dp.resize(n+1,-1);
        return helper(n)%mod;
    }
    long long int bottomUp(int n) {
        // code here
        vector<long long> res={0,1};
        for(int i=2;i<=n;i++){
            res.push_back((res[i-1]+res[i-2])%mod);
        }
        return res.back()%mod;
    }
    
    long long helper(int n){
        if(n<=1) return n;
        
        long long &ans=dp[n];
        if(ans!=-1) return ans;
        
        ans=helper(n-1)%mod+helper(n-2)%mod;
        return ans%mod;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    }
}
// } Driver Code Ends