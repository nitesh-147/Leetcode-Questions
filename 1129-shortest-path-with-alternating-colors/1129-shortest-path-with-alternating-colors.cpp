class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& red_edges, vector<vector<int>>& blue_edges) {
        vector<vector<int>> gr(n, vector<int>()), gb(n, vector<int>());
        for (auto& r : red_edges) gr[r.front()].push_back(r.back());
        for (auto& b : blue_edges) gb[b.front()].push_back(b.back());
        vector<int> res(n, -1);
        vector<vector<int>> vi(n, vector<int>(2, 0));
        queue<pair<int, int>> q;
        q.emplace(0, 0);
        q.emplace(0, 1);
        vi[0][0] = vi[0][1] = 1;
        int dis = 0;
        while (q.size()) {
            int len = q.size();
            while (len-- > 0) {
                auto cur = q.front();
                q.pop();
                if (res[cur.first] < 0) res[cur.first] = dis;
                auto& g = cur.second ? gb : gr;
                int ncolor = cur.second ?  0 : 1;
                for (auto& next : g[cur.first]) {
                    if (vi[next][ncolor]) continue;
                    vi[next][ncolor] = 1;
                    q.emplace(next, ncolor);
                }
            }
            ++dis;
        }
        return res;
    }
};