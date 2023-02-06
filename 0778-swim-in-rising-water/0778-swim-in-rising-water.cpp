class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> vis(n,vector<int>(n,0));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
        q.push({grid[0][0],{0,0}});
        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
        vis[0][0]=1;
        while(!q.empty()){
            int x=q.top().second.first;
            int y=q.top().second.second;
            int d=q.top().first;
            q.pop();
            if(x==n-1 && y==n-1) return d;
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx>=0 && nx<n && ny<n && ny>=0 && !vis[nx][ny]){
                    vis[nx][ny]=1;
                    q.push({max(d,grid[nx][ny]),{nx,ny}});
                }
            }
        }
        return 0;
    }
};