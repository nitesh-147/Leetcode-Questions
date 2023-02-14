class Solution {
public:
    int n=1e9+1;
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,int> m;
        map<pair<int,int>,int> vis;
        for(auto i:logs){
            int x=i[0],y=i[1];
            if(!vis[{x,y}]){
                vis[{x,y}]++;
                m[x]++;
            }
        }
        vector<int> ans(k,0);
        for(auto i:m){
            ans[i.second-1]++;
        }
        return ans;
    }
};