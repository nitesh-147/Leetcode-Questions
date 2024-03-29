class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
       
        int x=coordinates[1][0]-coordinates[0][0];
        int y=coordinates[1][1]-coordinates[0][1];
        for(int i=1;i<coordinates.size();i++){
            if(x*(coordinates[i][1]-coordinates[i-1][1])!=(coordinates[i][0]-coordinates[i-1][0])*y)
                return false;
        }
        return true;
    }
};