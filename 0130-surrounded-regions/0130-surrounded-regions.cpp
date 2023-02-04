class Solution {
public:
void  dfs(int i,int j,vector<vector<int>> &vis,vector<vector<char>>& board){
    int m=board.size(),n=board[0].size();
          queue<pair<int,int>> q;
          q.push({i,j});
          int dx[]={0,0,-1,1};
          int dy[]={1,-1,0,0};
         while(!q.empty()){
              int r=q.front().first;
              int c=q.front().second;
              q.pop();
              for(int i=0;i<4;i++){
                  int nr=r+dx[i];
                  int nc=c+dy[i];

                  if(nr>=0 && nc>=0 && nr<m && nc<n && board[nr][nc]=='O' && !vis[nr][nc]){
                      vis[nr][nc]=1;
                      q.push({nr,nc});
                  }
              }
         }
}
    void solve(vector<vector<char>>& board) {
        int m=board.size(),n=board[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
         for(int i=0;i<board[0].size();i++){
             if(board[0][i]=='O' && !vis[0][i]){
                 vis[0][i]=1;
               dfs(0,i,vis,board);
             }
             
         }
         for(int i=0;i<board[0].size();i++){
             if(board[m-1][i]=='O' && !vis[m-1][i]){
                 vis[m-1][i]=1;
                dfs(m-1,i,vis,board);
             }
            
         }
         for(int i=1;i<m-1;i++){
             if(board[i][0]=='O' && !vis[i][0]){
                 vis[i][0]=1;
                 dfs(i,0,vis,board);
             }
         }
        for(int i=1;i<m-1;i++){
             if(board[i][n-1]=='O' && !vis[i][n-1]){
                 vis[i][n-1]=1;
                 dfs(i,n-1,vis,board);
             }
         }

         for(int i=0;i<m;i++){
             for(int j=0;j<n;j++){
                 if(board[i][j]=='O' && !vis[i][j])
                 board[i][j]='X';
             }
         }
    }
};