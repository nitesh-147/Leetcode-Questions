//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
    vector<vector<int>> dp;
	int minDifference(int nums[], int n)  { 
	    // Your code goes here
	    int sum=0;
        // int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        dp.resize(n,vector<int>(sum+1,-1));
        
        for(int i=0;i<=sum;i++){
            bool dummy=helper(i,n-1,nums);
        }
        
        int mn=INT_MAX;
        for(int i=0;i<=sum;i++){
            if(dp[n-1][i]== true){
                int diff=abs(i-(sum-i));
                mn=min(mn,diff);
            }
        }
        return mn;
	} 
	
	 bool helper(int target,int n,int nums[]){
        if(target==0) return dp[n][target]=true;
        if(n==0) return dp[n][target] = nums[0]==target;
        
        if(dp[n][target]!=-1) return dp[n][target];
        
        bool notPick=helper(target,n-1,nums);
        bool pick=false;
        if(nums[n]<=target){
              pick=helper(target-nums[n],n-1,nums);
          }
        
        return dp[n][target]=(pick || notPick);
    }
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends