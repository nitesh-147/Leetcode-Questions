//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    vector<int> ans;
	    int prev=0,sum=0;
	    vector<int> temp;
	    for(int i=0;i<n;i++){
	        if(a[i]<0){
	            if(sum>prev){
	                ans=temp;
	                prev=sum;
	            }
	            else if(sum==prev && temp.size()>ans.size()){
	                ans=temp;
	            }
	            temp.clear();
	            sum=0;
	        }
	        else{
	            temp.push_back(a[i]);
	            sum+=a[i];
	        }
	    }
	    if(a[n-1]>=0){
	         if(sum>prev){
	                ans=temp;
	                prev=sum;
	            }
	            else if(sum==prev && temp.size()>ans.size()){
	                ans=temp;
	            }
	    }
	    if(ans.size()==0) return {-1};
	    return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends