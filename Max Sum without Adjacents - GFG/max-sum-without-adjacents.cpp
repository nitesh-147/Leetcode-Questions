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
	    vector<int> dp(n,-1);
	    return helper(arr,n-1,dp);
	}
	private:
	int helper(int *arr,int n,vector<int>& dp){
	    if(n==0) return arr[0];
	    if(n<0) return 0;
	    
	    int &ans=dp[n];
	    if(ans!=-1) return ans;
	    
	    int pick=helper(arr,n-2,dp)+arr[n];
	    int notpick=helper(arr,n-1,dp);
	    
	    ans=max(pick,notpick);
	    return ans;
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