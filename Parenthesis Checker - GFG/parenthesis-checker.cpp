//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        for(auto i:x){
            if(i==']'){
                if(!s.empty() && s.top()=='[') s.pop();
                else return false;
            }
            else if(i=='}'){
                if(!s.empty() && s.top()=='{') s.pop();
                else return false;
            }
            else if(i==')'){
                if(!s.empty() && s.top()=='(') s.pop();
                else return false;
            }
            else{
                s.push(i);
            }
        }
        return s.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends