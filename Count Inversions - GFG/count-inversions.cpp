//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
  long long ans=0;
  vector<long long> temp;
  void merge(long long a[],long long l,long long m,long long r){
      long long i=l,j=m+1,k=l;
      while(i<=m && j<=r){
          if(a[i]<=a[j]){
              temp[k++]=a[i++];
          } 
          else {
              temp[k++]=a[j++];
              ans+=(m+1-i);
          }
      }
      while(i<=m) temp[k++]=a[i++];
      while(j<=r) temp[k++]=a[j++];
      
      for(long long i=l;i<=r;i++){
          a[i]=temp[i];
      }
  }
  void mergesort(long long arr[],long long l,long long r){
      if(l<r){
          long long int m=l+(r-l)/2;
          mergesort(arr,l,m);
          mergesort(arr,m+1,r);
          merge(arr,l,m,r);
      }
  }
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Heret
        temp.resize(N);
        mergesort(arr,0,N-1);
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends