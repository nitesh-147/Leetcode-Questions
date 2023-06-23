//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    vector<vector<int>> dp;
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        //code here
        dp.resize(a,vector<int>(b,-1));
        return helper(a-1,b-1);
    }
    
    int helper(int a,int b){
        if(a==0 && b==0) return 1;
        if(a<0 || b<0) return 0;
        
        int &ans=dp[a][b];
        if(ans!=-1) return ans;
        
        ans=helper(a-1,b)+helper(a,b-1);
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends