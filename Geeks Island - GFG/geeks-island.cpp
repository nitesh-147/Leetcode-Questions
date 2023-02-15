//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
     void fn1(vector<vector<int>> &mat,int n,int m, vector<vector<int>>&io){

        queue<pair<int,int>>q;

        for(int i=0;i<n;i++){

            q.push({i,0});

            io[i][0]=1;

        }

        for(int j=1;j<m;j++){

            q.push({0,j});

            io[0][j]=1;

        }

        pair<int,int>t;

        while(!q.empty()){

            t=q.front();

            q.pop();

            int x=t.first;

            int y=t.second;

            if(x!=0 && io[x-1][y]==0 && mat[x][y]<=mat[x-1][y]){

                q.push({x-1,y});

                io[x-1][y]=1;

            }

             if(y!=0 && io[x][y-1]==0 && mat[x][y]<=mat[x][y-1]){

                q.push({x,y-1});

                io[x][y-1]=1;

            }

             if(x!=n-1 && io[x+1][y]==0 && mat[x][y]<=mat[x+1][y]){

                q.push({x+1,y});

                io[x+1][y]=1;

            }

             if(y!=m-1 && io[x][y+1]==0 && mat[x][y]<=mat[x][y+1]){

                q.push({x,y+1});

                io[x][y+1]=1;

            }

        }

    }

    void fn2(vector<vector<int>> &mat,int n,int m, vector<vector<int>>&io){

        queue<pair<int,int>>q;

        for(int i=0;i<n;i++){

            q.push({i,m-1});

            io[i][m-1]=1;

        }

        for(int i=0;i<m-1;i++){

            q.push({n-1,i});

            io[n-1][i]=1;

        }

        pair<int,int>t;

        while(!q.empty()){

            t=q.front();

            q.pop();

            int x=t.first;

            int y=t.second;

            if(x!=0 && io[x-1][y]==0 && mat[x][y]<=mat[x-1][y]){

                q.push({x-1,y});

                io[x-1][y]=1;

            }

             if(y!=0 && io[x][y-1]==0 && mat[x][y]<=mat[x][y-1]){

                q.push({x,y-1});

                io[x][y-1]=1;

            }

             if(x!=n-1 && io[x+1][y]==0 && mat[x][y]<=mat[x+1][y]){

                q.push({x+1,y});

                io[x+1][y]=1;

            }

             if(y!=m-1 && io[x][y+1]==0 && mat[x][y]<=mat[x][y+1]){

                q.push({x,y+1});

                io[x][y+1]=1;

            }

        }

    }

    int water_flow(vector<vector<int>> &mat,int n,int m){

    vector<vector<int>>as(n,vector<int>(m,0));

    vector<vector<int>>io(n,vector<int>(m,0));

    fn1(mat,n,m,io);

    fn2(mat,n,m,as);

    int c=0;

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(as[i][j]==1 && io[i][j]==1)c++;

        }

    }

    return c;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>mat[i][j];
            }
        }
        Solution ob;
        cout << ob.water_flow(mat, n, m) << endl;
        
    }
}


// } Driver Code Ends