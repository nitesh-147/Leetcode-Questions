//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
    int ans=-1;
    int l=0,r=n-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(arr[m]==1){
            ans=m;
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return ans;
}