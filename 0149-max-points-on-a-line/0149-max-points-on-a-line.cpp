class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if(points.size()<=2) return points.size();
        sort(points.begin(),points.end());
        int ans=1;
        for(int i=0;i<points.size();i++){
            unordered_map<double,int> m;
            for(int j=0;j<points.size();j++){
                if(j!=i){
                    if(j<i){
                        double slope=(double)(points[i][1]-points[j][1])/(points[i][0]-points[j][0]);
                        m[slope]++;
                    }
                    else{
                         double slope=(double)(points[j][1]-points[i][1])/(points[j][0]-points[i][0]);
                        m[slope]++;
                    }
                }
            }
            int mx=1;
            for(auto i:m){
              mx=max(mx,i.second);
            }
            ans=max(ans,mx+1);
        }
        return ans;
    }
};