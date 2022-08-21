class Solution {
public:
    bool isBoomerang(vector<vector<int>>& p) {
        for(int i=1;i<3;i++){
            if(p[i][0]==p[i-1][0] && p[i][1]==p[i-1][1])
                return false;
        }
        // float s1,s2;
        if((p[1][1]-p[0][1])*(p[2][0]-p[1][0])==(p[1][0]-p[0][0])*(p[2][1]-p[1][1]))
            return false;
        return true;
        
    }
};