//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string a, string b)
    {
        // Your code here
        if(a.size()!=b.size()) return false;
        if(a.size()<3) return a==b;
        string s1=a.substr(2)+a[0]+a[1];
        char c1=a.back();
        a.pop_back();
        char c2=a.back();
        a.pop_back();
        string s2;
        s2=s2+c2+c1+a;
        return s1==b || s2==b;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends