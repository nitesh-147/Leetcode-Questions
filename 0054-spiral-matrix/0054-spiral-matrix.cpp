class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0,down=matrix.size()-1,left=0,right=matrix[0].size()-1;
        vector<int> v;
        while(left <= right && top <= down){
            for(int i=left;i<=right;i++){
                v.push_back(matrix[top][i]);
            }
            top++;
            if(top>down) break;

            for(int i=top;i<=down;i++){
                v.push_back(matrix[i][right]);
            }
            right--;
            if(right<left) break;

            for(int i=right;i>=left;i--){
                v.push_back(matrix[down][i]);
            }
            down--;
            if(down<top) break;

            for(int i=down;i>=top;i--){
                v.push_back(matrix[i][left]);
            }
            left++;
            if(left>right) break;
        }
        return v;
    }
};