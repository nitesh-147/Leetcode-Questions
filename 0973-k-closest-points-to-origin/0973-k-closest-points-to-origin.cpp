class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
         priority_queue<pair<int,pair<int,int>>> p;
        for(auto i:points){
            int s=i[0]*i[0]+i[1]*i[1];
            p.push({s,{i[0],i[1]}});
        }
        int n=points.size()-k;
        while(n--){
            p.pop();
        }
        vector<vector<int>> v;
        while(!p.empty()){
            v.push_back({p.top().second.first,p.top().second.second});
            p.pop();
        }
        return v;
    }
};