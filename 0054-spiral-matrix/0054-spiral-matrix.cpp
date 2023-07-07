class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
               vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int startrow=0;
        int endrow=row-1;
        int startcol=0;
        int endcol=col-1;
        int count=0;
        int total=row*col;
        while(count<total){
            for(int i=startcol;i<=endcol;i++){
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;
            for(int i=startrow;i<=endrow;i++){
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;
            if(count==total) break;
            for(int i=endcol;i>=startcol;i--){
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
            for(int i=endrow; i>=startrow;i--){
                ans.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;
        }
        return ans;

    }
};