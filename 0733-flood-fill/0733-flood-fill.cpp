class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val=image[sr][sc];
        if(val==color) return image;
        int m=image.size(),n=image[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));

        vector<int> dx={0,0,1,-1};
        vector<int> dy={1,-1,0,0};
       
        queue<pair<int,int>> q;
        q.push({sr,sc});
        vis[sr][sc]=1;

        while(!q.empty()){
            // pair<int,int> p=q.front();
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            image[r][c]=color;
            for(int i=0;i<4;i++){
                int nr=dx[i]+r;
                int nc=dy[i]+c;

                if(nr>=0 &&  nc>=0 && nr<m && nc<n && image[nr][nc]==val && vis[nr][nc]==0){
                    q.push({nr,nc});
                    vis[nr][nc]=1;
                }
            }
        }
        return image;
    }
};