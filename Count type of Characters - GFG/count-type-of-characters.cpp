//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            vector<int> v(4,0);
            for(auto i:s){
                if(i>=65 && i<=90) v[0]++;
                else if(i>=97 && i<=122) v[1]++;
                else if(i>='0' && i<='9') v[2]++;
                else v[3]++;
            }
            return v;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends