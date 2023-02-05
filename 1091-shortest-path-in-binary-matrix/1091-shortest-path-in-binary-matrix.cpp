class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]!=0) return -1;
        int n=grid.size();
        queue<pair<pair<int,int>,int>>q;
        q.push({{0,0},1});
        int dx[]={1,-1,0,0,1,1,-1,-1};
        int dy[]={0,0,1,-1,1,-1,1,-1};
        grid[0][0]=1;
        while(!q.empty()){
            int x=q.front().first.first;
            int y=q.front().first.second;
            int d=q.front().second;
            q.pop();
            if(x==n-1 && y==n-1) return d;
            // grid[x][y]=1;
            for(int i=0;i<8;i++){
                int nx=x+dx[i],ny=y+dy[i];
                if(nx>=0 && nx<n && ny>=0 && ny<n && grid[nx][ny]==0){
                    grid[nx][ny]=1;
                    q.push({{nx,ny},d+1});
                }
            }
        }
        return -1;
    }
};