class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        vector<vector<int>> dist(m,vector<int>(n,0));
        queue<pair<pair<int,int>,int>> q;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
            }
        }

        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};

        while(!q.empty()){
            int x=q.front().first.first;
            int y=q.front().first.second;
            int d=q.front().second;
            q.pop();
            dist[x][y]=d;
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];

                if(nx>=0 && nx<m && ny>=0 && ny<n && !vis[nx][ny]){
                    vis[nx][ny]=1;
                    q.push({{nx,ny},d+1});
                }
            }
        }
        return dist;
    }
};