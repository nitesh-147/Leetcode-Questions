//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minIteration(int N, int M, int x, int y){    
        // code here
        queue<pair<pair<int,int>,int>> q;
        q.push({{x,y},0});
        vector<vector<int>> vis(N+1,vector<int>(M+1,0));
        vis[x][y]=1;
        int ans;
        vector<vector<int>> d={{1,0},{-1,0},{0,1},{0,-1}};
    
        while(!q.empty()){
            x=q.front().first.first;
            y=q.front().first.second;
            int dis=q.front().second;
            ans=dis;
            q.pop();
            for(int i=0;i<4;i++){
                int nx=x+d[i][0];
                int ny=y+d[i][1];
                if(nx>0 && nx<=N && ny>0 && ny<=M && !vis[nx][ny]){
                    vis[nx][ny]=1;
                    q.push({{nx,ny},dis+1});
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends