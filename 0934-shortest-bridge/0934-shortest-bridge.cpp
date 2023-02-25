class Solution {
public:
    void floodFill(int i,int j,vector<vector<int>>& grid,vector<pair<int,int>> &v){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0) return;
        v.push_back({i,j});
        grid[i][j]=0;
        floodFill(i+1,j,grid,v);
        floodFill(i,j+1,grid,v);
        floodFill(i-1,j,grid,v);
        floodFill(i,j-1,grid,v);
    }
    int shortestBridge(vector<vector<int>>& grid) {
        vector<pair<int,int>> x;
        vector<pair<int,int>> y;
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    count++;
                    if(count==1)
                        floodFill(i,j,grid,x);
                    else
                        floodFill(i,j,grid,y);
                }
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<x.size();i++){
            for(int j=0;j<y.size();j++){
                int dist=abs(x[i].first-y[j].first)+abs(x[i].second-y[j].second)-1;
                ans=min(ans,dist);
            }
        }
        return ans;
    }
};