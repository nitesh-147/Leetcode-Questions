//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int first(int arr[],int n,int x){
    int l=0,r=n-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(arr[m]<x)l=m+1;
        else r=m-1;
    }
    if(r+1<n && r+1>=0 && arr[r+1]==x) return r+1;
    else return -1;
}

int last(int arr[],int n,int x){
    int l=0,r=n-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(arr[m]<=x)l=m+1;
        else r=m-1;
    }
    if(arr[r]==x) return r;
    else return -1;
}


vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans;
    ans.push_back(first(arr,n,x));
    ans.push_back(last(arr,n,x));
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends