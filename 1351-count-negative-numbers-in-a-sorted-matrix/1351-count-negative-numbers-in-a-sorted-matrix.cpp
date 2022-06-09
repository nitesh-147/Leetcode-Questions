class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0; i<grid.size();i++){
            int a=0,b=grid[i].size()-1;
            int x=0;
            while(a<=b){
                int m=a+(b-a)/2;
                if(grid[i][m]<0){
                    
                    b=m-1;
                    x=grid[i].size()-m;
                }
                else{
                    a=m+1;
                }
            }
            ans+=x;
        }
        return ans;
    }
};