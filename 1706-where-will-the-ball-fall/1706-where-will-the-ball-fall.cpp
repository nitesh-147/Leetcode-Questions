class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> ans;
        for(int j=0;j<grid[0].size();j++){
            int x=j,i,an;
             for( i=0;i<grid.size();i++){
                 
                 if(x+1<grid[0].size() && grid[i][x]==1 && grid[i][x]==grid[i][x+1]){
                    x++;
                    an=x;
                 }
                 else if(x-1>-1 && grid[i][x]==-1 && grid[i][x]==grid[i][x-1]){
                    x--;
                    an=x;
                 }
                 else break;
             }
             if(i==grid.size())
             ans.push_back(an);
             else
             ans.push_back(-1);
        }
        return ans;
    }
};