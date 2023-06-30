class Solution {
public:
    int helper(int i,int j,int m,int n,int len,vector<vector<int>>& matrix){
        if(i+len>m || j+len>n) return 0;
        for(int x=i;x<i+len;x++){
            for(int y=j;y<j+len;y++){
                if(matrix[x][y]==0) return 0;
            }
        }
        return 1;
    }
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int ans=0;
        for(int i=1;i<=min(m,n);i++){
            for(int j=0;j<m;j++){
                for(int k=0;k<n;k++){
                    ans+=helper(j,k,m,n,i,matrix);
                }
            }
            cout<<ans<<" ";
        }
        return ans;
    }
};