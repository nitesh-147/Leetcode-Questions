//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    string ans;
    unordered_map<char,int> m;
    for(auto i:s){
        m[i]++;
        if(m[i]==2){
            ans.push_back(i);
            return ans;
        } 
    }
    return "-1";
}