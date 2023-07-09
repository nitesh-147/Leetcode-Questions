class tree
{
public:
    vector<int> st;
    int n;

    void init(int n)
    {
        st.resize(4 * n, 0);
        this->n = n;
    }

    void build(int s, int e, int node, vector<int> v)
    {
        if (s == e)
        {
            st[node] = v[s];
            return;
        }

        int mid = (s + e) / 2;
        build(s, mid, node * 2 + 1, v);
        build(mid + 1, e, node * 2 + 2, v);

        st[node] = st[node * 2 + 1] ^ st[node * 2 + 2];
    }

    int que(int s, int e, int node, int l, int r)
    {
        if (s > r || e < l)
            return 0;
        if (s >= l && e <= r)
        {
            return st[node];
        }
        int mid = (s + e) / 2;
        int left = que(s, mid, node * 2 + 1, l, r);
        int right = que(mid + 1, e, node * 2 + 2, l, r);
        return left ^ right;
    }

    void build(vector<int> v)
    {
        build(0, n - 1, 0, v);
    }

    int query(int l, int r)
    {
        return que(0, n - 1, 0, l, r);
    }
};

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
    tree t;
    t.init(arr.size());
    t.build(arr);
    vector<int> ans;
    for (auto i : queries)
    {
        int temp = t.query(i[0], i[1]);
        ans.push_back(temp);
    }
    return ans;
    }
};