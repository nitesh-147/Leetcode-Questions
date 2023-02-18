class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        
        int ans=0;
        int m=maze.size(),n=maze[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        vis[entrance[0]][entrance[1]]=1;

        

        queue<pair<int,int>> q;
        q.push({entrance[0],entrance[1]});
        q.push({-1,-1});


        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};

        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            if(x!=-1 && y!=-1){
               for(int i=0;i<4;i++){
                   int r=x+dx[i];
                   int c=y+dy[i];
                   if(r>=0 && c>=0 && r<m && c<n && !vis[r][c] && maze[r][c]=='.'){
                       vis[r][c]=1;
                       q.push({r,c});
                   }
                   else if(ans && (r<0 || c<0 || c>=n || r>=m))
                   return ans;
               }
            }
            else{
               ans++;
               if(!q.empty())
               q.push({-1,-1});
            }
        }

        return -1;
    }
};