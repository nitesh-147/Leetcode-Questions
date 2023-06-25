//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
vector<vector<int>> dp;
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        dp.resize(arr.size(),vector<int>(sum+1,-1));
        return helper(0,arr,sum);
    }
    
    bool helper(int i,vector<int> arr,int sum){
        if(sum==0) return true;
        if(i==arr.size()-1) return sum==arr.back();
        
        int &ans=dp[i][sum];
        if(ans!=-1) return ans;
        
       
        bool notPick=helper(i+1,arr,sum);
        
        
        bool pick=false;
        if(sum>=arr[i])
            pick=helper(i+1,arr,sum-arr[i]);
        
        ans=(pick || notPick);
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends