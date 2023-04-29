class Solution {
public:
    vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edgeList, vector<vector<int>>& queries) {
        vroot.resize(n);
        for(int i=0;i<n;i++) vroot[i] = i;
        for(int i=0;i<queries.size();i++) queries[i].push_back(i);
        sort(queries.begin(), queries.end(), [](auto& v1, auto& v2){return v1[2] < v2[2];});
        sort(edgeList.begin(), edgeList.end(), [](auto& v1, auto& v2) {return v1[2] < v2[2];});
        
        vector<bool> res(queries.size());
        auto it = edgeList.begin(), end = edgeList.end();
        for(auto& v:queries){
            int p = v[0], q = v[1], limit = v[2], i = v[3];
            while(it != end && (*it)[2] < limit){
                connect((*it)[0], (*it)[1]);
                ++it;
            }
            res[i] = isConnect(p, q);
        }
        return res;
    }
    
    void connect(int i, int j){
        auto ri = root(i), rj = root(j);
        vroot[ri] = rj;
    }
    
    bool isConnect(int i, int j){
        return root(i) == root(j);
    }
    
    int root(int i){
        if(vroot[i] != i) vroot[i] = root(vroot[i]);
        return vroot[i];
    }
    
    vector<int> vroot;
    };