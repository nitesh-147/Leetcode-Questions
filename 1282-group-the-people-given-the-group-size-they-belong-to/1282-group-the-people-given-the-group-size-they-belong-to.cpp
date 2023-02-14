class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        unordered_map<int,vector<int>> m;
        vector<vector<int>> ans;
        for(int i=0;i<g.size();i++){
            m[g[i]].push_back(i);
            if(m[g[i]].size()==g[i]){
                ans.push_back(m[g[i]]);
                m[g[i]].clear();
            }
        }
        return ans;
    }
};