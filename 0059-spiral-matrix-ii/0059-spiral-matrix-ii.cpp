class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n));
        int top=0,down=n-1,left=0,right=n-1;
        int x=1;
        while(left <= right && top <= down){
            for(int i=left;i<=right;i++){
                v[top][i]=x++;
            }
            top++;
            if(top>down) break;

            for(int i=top;i<=down;i++){
                v[i][right]=x++;
            }
            right--;
            if(right<left) break;

            for(int i=right;i>=left;i--){
                v[down][i]=x++;
            }
            down--;
            if(down<top) break;

            for(int i=down;i>=top;i--){
                v[i][left]=x++;
            }
            left++;
            if(left>right) break;
        }
        return v;
        // return {};
    }
};