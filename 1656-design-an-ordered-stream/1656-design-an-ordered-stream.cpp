class OrderedStream {
public:
    int i=1,s;
    unordered_map<int,string> m;
    OrderedStream(int n) {
        s=n;
    }
    
    vector<string> insert(int idKey, string value) {
        m[idKey]=value;
        vector<string> v;
        while(i<=s && m[i]!=""){
            v.push_back(m[i]);
            i++;
        }
        return v;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */