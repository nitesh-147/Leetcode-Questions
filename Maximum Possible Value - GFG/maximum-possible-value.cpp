//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        // code here
        int c=0;
        long long ans=0;
        int smallest=INT_MAX;
        for(int i=0;i<N;i++){
            if(B[i]>1){
                int add=(A[i]+A[i])*(B[i]/2);
                ans+=add;
                c+=(B[i]/2);
                smallest=min(smallest,A[i]);
            }
        }
        if(c%2!=0) ans=ans-smallest-smallest;
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
          cin>>B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N,A,B);
        cout<<ans<<endl;
    }
} 
// } Driver Code Ends