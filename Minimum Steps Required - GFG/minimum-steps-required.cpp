//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    int c=0,d=0;int n=str.size();

    int i=0;
    while(i<n)
    {
        if(str[i]=='a')
        {
            c++;
           while(str[i]=='a')
           {
               i++;
           }
        }
        if(str[i]=='b')
        {
            d++;
            while(str[i]=='b')
            {
                i++;
            }
        }
    }
    return min(c,d)+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends