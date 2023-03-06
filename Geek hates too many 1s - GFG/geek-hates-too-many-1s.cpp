//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    int noConseBits(int n) {
        // code here
        string s;
        while(n!=0){
            if(n&1) s+='1';
            else s+='0';
            n>>=1;
        }
        int curr=0;
        int ans=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                curr++;
                if(curr<3) ans+=pow(2,i);
                else{
                    curr=0;
                }
            }
            else{
                curr=0;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends