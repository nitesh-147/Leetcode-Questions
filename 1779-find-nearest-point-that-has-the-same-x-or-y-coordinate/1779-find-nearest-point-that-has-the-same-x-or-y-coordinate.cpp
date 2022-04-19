class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans=INT_MAX,index;
        for(int i=0;i<points.size();i++){
            if(x==points[i][0]||y==points[i][1])
            {
                int temp=abs(points[i][0]-x)+abs(points[i][1]-y);
                if(ans>temp){
                    index=i;
                    ans=temp;
                }
            }
        }
        if(ans==INT_MAX)
            return -1;
        return index;
        
    }
};