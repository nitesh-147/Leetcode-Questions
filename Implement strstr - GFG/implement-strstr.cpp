//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     for(int i=0;i<s.size()-x.size()+1;i++){
         if(s[i]==x[0]){
             int k=0;
             for(int j=i;j<i+x.size();j++,k++){
                 if(s[j]!=x[k]) break;
             }
             if(k==x.size()) return i;
         }
     }
     return -1;
}