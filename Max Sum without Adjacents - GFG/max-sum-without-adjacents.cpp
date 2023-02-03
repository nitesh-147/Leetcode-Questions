//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	     if(n==1) return arr[0];
	    int dp[n];
	    dp[n-1]=arr[n-1];
	    dp[n-2]=max(arr[n-2],arr[n-1]);
	    for(int i=n-3;i>=0;i--){
	        dp[i]=max(dp[i+1],arr[i]+dp[i+2]);
	    }
	    return dp[0];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends