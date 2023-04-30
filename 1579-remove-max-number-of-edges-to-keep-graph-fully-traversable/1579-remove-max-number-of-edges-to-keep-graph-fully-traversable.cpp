class Solution {
public:
    vector<pair<long long, pair<int, int>>> p;
    vector<int> id;
    int N;

    void initialize() {
        id.resize(N);
        p.resize(N);
        for(int i = 0;i < N;++i)
            id[i] = i;
    }

    int root(int x) {
        while(id[x] != x) {
            id[x] = id[id[x]];
            x = id[x];
        }

        return x;
    }

    void union1(int x, int y) {
        int p = root(x);
        int q = root(y);
        id[p] = id[q];
    }

    int check_type(int type, int n, vector<vector<int>>& edges) {
        int x, y;
        int min_c = 0;
        for(int i = 0;i < edges.size();i++) {
            int x=edges[i][1];
            int y=edges[i][2];
            if (edges[i][0] == type && root(x) != root(y)) {
                min_c++;
                union1(x, y);
            }
        }
        
        return min_c;
    }

    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        N=n+1;
        initialize();
        int t3 = check_type(3, n, edges);
        auto p_temp = p;
        auto id_temp = id;
        int t1 = check_type(1, n, edges);
        p=p_temp;
        id=id_temp;
        int t2 = check_type(2, n, edges);

        if (t3+t1 != n - 1 || t3+t2 != n - 1) {
            return -1;
        }
        
        return edges.size()-t3-t1-t2; 
    }
};