//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
        int i=0,j=0;
        long long sum=0;
        while(j<K){
            sum+=GeekNum[j++];
        }
        for(j=K;j<N;j++){
            GeekNum.push_back(sum);
            sum-=GeekNum[i];
            i++;
            sum+=GeekNum[j];
        }
        return GeekNum.back();
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends