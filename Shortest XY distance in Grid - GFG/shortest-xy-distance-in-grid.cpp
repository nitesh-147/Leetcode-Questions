//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int N, int M) {
        // code here
        queue<pair<int,int>> q;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(grid[i][j]=='X'){
                    q.push({i,j});
                }
            }
        }
        int d[4][2]={
            {1,0},{-1,0},{0,1},{0,-1}
        };
        int ans=0;
        while(!q.empty()){
           int size=q.size();
           ans++;
           while(size--){
               int x=q.front().first;
               int y=q.front().second;
               q.pop();
               for(int i=0;i<4;i++){
                   int nx=x+d[i][0],ny=y+d[i][1];
                   if(nx>=0 && nx<N && ny>=0 && ny<M && grid[nx][ny]!='X'){
                       if(grid[nx][ny]=='Y') return ans;
                       grid[nx][ny]='X';
                       q.push({nx,ny});
                   }
               }
           }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        char ch;
        cin >> N >> M;

        vector<vector<char>> grid;

        for (int i = 0; i < N; i++) {
            vector<char> col;
            for (int i = 0; i < M; i++) {
                cin >> ch;
                col.push_back(ch);
            }
            grid.push_back(col);
        }

        Solution ob;
        cout << ob.shortestXYDist(grid, N, M) << endl;
    }
    return 0;
}
// } Driver Code Ends