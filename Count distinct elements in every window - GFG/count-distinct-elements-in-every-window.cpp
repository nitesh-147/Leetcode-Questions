//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        int count=0;
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<k;i++){
            m[A[i]]++;
            if(m[A[i]]==1) count++;
        }
        ans.push_back(count);
        for(int i=k;i<n;i++){
            m[A[i]]++;
            if(m[A[i]]==1) count++;
            m[A[i-k]]--;
            if(m[A[i-k]]==0) count--;
            ans.push_back(count);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends