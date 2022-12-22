//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        for(int i=1;i<n;i++){
            arr[i]+=arr[i-1];
        }
        unordered_map<long long int,long long int> m;
        for(auto i:arr)m[i]++;
        long long int ans=0;
        for(auto i:m){
            if(i.first==0){
                ans+=(i.second*(i.second+1))/2;
            }
            else{
                ans+=(i.second*(i.second-1))/2;
            }
        }
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
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends