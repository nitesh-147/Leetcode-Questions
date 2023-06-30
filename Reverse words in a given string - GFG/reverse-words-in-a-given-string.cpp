//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        vector<string> v;
        string temp;
        for(auto i:s){
            if(i=='.'){
                v.push_back(temp);
                temp.clear();
            }
            else
            temp+=i;
        }
        v.push_back(temp);
        reverse(v.begin(),v.end());
        string ans;
        for(auto i:v) ans+=(i+".");
        ans.pop_back();
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
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends